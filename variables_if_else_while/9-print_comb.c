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

for (n = 0; n < 10; n++)  /* Loop through numbers 0 to 9 */
{
	putchar(n + '0');  /* Print the current number */
        putchar(',');      /* Print the comma */
        putchar(' ');      /* Print the space */
}
    putchar('\n');     /* Print a newline at the end */

    return (0);
}
