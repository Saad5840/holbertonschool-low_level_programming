#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of underscores to print.
 */

void print_line(int n)
{
int i;

if (n > 0)
{
	for (i = 0; i < n; i++)
	{
		_putchar('-'); 
	}
	_putchar('\n');

}

_putchar('\n');

}
