#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print lowercase letters */
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	/* Print uppercase letters */
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	/* Print a new line */
	putchar('\n');

	return (0);
}
