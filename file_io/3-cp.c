#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message to stderr and exits.
 * @exit_code: The exit code to use.
 * @msg: The error message prefix.
 * @filename: The file associated with the error.
 */
void error_exit(int exit_code, const char *msg, const char *filename)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
	exit(exit_code);
}

/**
 * close_fd - Closes a file descriptor and exits with code 100 if it fails.
 * @fd: The file descriptor to close.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * initial_read - Performs an initial read from the source file.
 * @fd_from: The source file descriptor.
 * @buffer: Buffer to store data.
 * @file_from: Name of the source file.
 *
 * Return: The number of bytes read.
 */
ssize_t initial_read(int fd_from, char *buffer, const char *file_from)
{
	ssize_t r;

	r = read(fd_from, buffer, BUFFER_SIZE);
	if (r == -1)
	{
		close(fd_from);
		error_exit(98, "Error: Can't read from file", file_from);
	}
	return (r);
}

/**
 * copy_loop - Copies the remainder of the source file to the destination.
 * @fd_from: Source file descriptor.
 * @fd_to: Destination file descriptor.
 * @file_from: Name of the source file.
 * @file_to: Name of the destination file.
 */
void copy_loop(int fd_from, int fd_to, char *file_from, char *file_to)
{
	ssize_t r, w;
	char buffer[BUFFER_SIZE];

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			error_exit(99, "Error: Can't write to", file_to);
		}
	}
	if (r == -1)
	{
		close_fd(fd_from);
		close_fd(fd_to);
		error_exit(98, "Error: Can't read from file", file_from);
	}
}

/**
 * main - Copies the content of a file to another file.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: 0 on success, or exits with codes 97, 98, 99, or 100 on error.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file", av[1]);

	/* Test reading the first block before opening the destination */
	r = initial_read(fd_from, buffer, av[1]);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_fd(fd_from);
		error_exit(99, "Error: Can't write to", av[2]);
	}

	if (r > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			error_exit(99, "Error: Can't write to", av[2]);
		}
	}

	copy_loop(fd_from, fd_to, av[1], av[2]);

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
