#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase in reverse order,
 *              followed by a new line, using only putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
