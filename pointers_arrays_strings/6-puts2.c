#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: Pointer to the string.
 *
 * Description: This function prints every other character of a string,
 * starting from index 0, followed by a new line.
 */

void puts2(char *str)
{

int i;

for (i = 0; str[i] != '\0'; i += 2)
{
	_putchar(str[i]);
}

_putchar('\n');
}
