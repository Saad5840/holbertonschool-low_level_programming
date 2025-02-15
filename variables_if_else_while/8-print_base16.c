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
int n;

for (n = 0; n < 10; n++)
{
	putchar(n + '0');
}

for (n = 10; n < 16; n++)
{
	putchar(n - 10 + 'a');
}

putchar('\n');
return (0);

}
