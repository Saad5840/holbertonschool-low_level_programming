#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 *
 * Description: If separator is NULL, it is not printed.
 * If one of the strings is NULL, prints "(nil)" instead.
 * Prints a new line at the end.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *str;

va_start(args, n);


for (i = 0; i < n; i++)
{
	str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);

	if (separator != NULL && i < n - 1)
		printf("%s", separator);
}

printf("\n");
va_end(args);
}
