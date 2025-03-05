#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as arguments
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
        int num2 = atoi(argv[2]);

        int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", result);
	return (0);

}
