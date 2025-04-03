#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message to stderr and exits with a given code
 * @code: The exit code
 * @msg: The error message prefix
 * @arg: The argument to include in the message
 */
void print_error(int code, char *msg, char *arg)
{
    dprintf(STDERR_FILENO, "Error: %s %s\n", msg, arg);
    exit(code);
}

/**
 * main - Copies the content of a file to another file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, various error codes on failure
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, read_bytes, write_bytes;
    char buffer[BUFFER_SIZE];
    mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        print_error(98, "Can't read from file", argv[1]);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
    if (fd_to == -1)
        print_error(99, "Can't write to", argv[2]);

    while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        write_bytes = write(fd_to, buffer, read_bytes);
        if (write_bytes == -1 || write_bytes != read_bytes)
            print_error(99, "Can't write to", argv[2]);
    }

    if (read_bytes == -1)
        print_error(98, "Can't read from file", argv[1]);

    if (close(fd_from) == -1)
        print_error(100, "Can't close fd", argv[1]);

    if (close(fd_to) == -1)
        print_error(100, "Can't close fd", argv[2]);

    return (0);
}
