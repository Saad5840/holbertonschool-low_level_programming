#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the calculator program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, or exits with status 98, 99, or 100 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
