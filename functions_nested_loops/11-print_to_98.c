#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers from n to 98, followed by a new line.
 * @n: The starting number.
 */

void print_to_98(int n)
{
int i;

if (n <= 98)
{
	for (i = n; i < 98; i++)
	{
		printf("%d, ", i);
	}
	printf("98\n");
}

else
{
	for (i = n; i > 98; i--)
	{
		printf("%d, ", i);
	}
	printf("98\n");
}
}
