#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers,
 *              followed by a new line, using only putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    for (n = 0; n < 10; n++)
    {
        putchar(n + '0');  /* Print the current number */

        if (n != 9)  /* For numbers 0-8, print the separator */
        {
            putchar(',');  /* Print comma */
            putchar(' ');  /* Print space */
        }
    }

    putchar('\n');  /* Print the newline at the end */

    return (0);
}
