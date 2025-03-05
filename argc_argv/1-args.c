#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: Argument count
 * @argv: Argument vector (unused)
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

(void)argv;

printf("%d\n", argc - 1);

return (0);

}
