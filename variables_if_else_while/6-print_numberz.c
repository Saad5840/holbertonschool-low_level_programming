#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0,
 *              followed by a new line, without using variables of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)  /* ASCII values for 0-9 */
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
