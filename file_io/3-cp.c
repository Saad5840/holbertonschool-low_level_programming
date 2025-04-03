#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message to stderr and exits.
 * @exit_code: Exit code to use.
 * @message: Message prefix to display.
 * @filename: Name of the file associated with the error.
 */
void error_exit(int exit_code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	exit(exit_code);
}

/**
 * main - Copies the content of a file to another file.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: 0 on success, or exits with specific error codes on failure.
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

	/* Open the source file */
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file", av[1]);

	/*
	 * Perform an initial read to ensure we can read from the source.
	 * If this read fails, we exit with code 98 before opening the destination.
	 */
	r = read(fd_from, buffer, BUFFER_SIZE);
	if (r == -1)
	{
		close(fd_from);
		error_exit(98, "Error: Can't read from file", av[1]);
	}

	/* Open the destination file */
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to", av[2]);
	}

	/* If we read any data from the first call, write it */
	if (r > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to", av[2]);
		}
	}

	/* Continue reading and writing in a loop */
	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to", av[2]);
		}
	}

	/* Check if the last read failed */
	if (r == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file", av[1]);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
