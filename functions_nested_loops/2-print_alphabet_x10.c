#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times, each followed by a new line
 *
 * This function loops 10 times, printing the alphabet in lowercase each time,
 * followed by a new line.
 */

void print_alphabet_x10(void)
{
int i;
char c;


for (i = 0; i < 10; i++)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

}
