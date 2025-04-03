#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"


#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"

/**
 * main - copies the content of a file to another file
 * @argc: number parameters
 * @argv: argumentos
 * Return: int -1 id fails
 **/
int main(int argc, char **argv)
{
	int int_open, int_open2, on_close, r, w;
	char *buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	int_open = open(argv[1], O_RDONLY);

	if (int_open == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	int_open2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (int_open2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	while (1)
	{
		r = read(int_open, buff, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
		if (r > 0)
		{
			w = write(int_open2, buff, r);
			if (w == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		} else
			break;
	}
	on_close = close(int_open2);
	if (on_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", int_open2), exit(100);
	on_close = close(int_open);
	if (on_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", int_open), exit(100);
	return (0);
}
