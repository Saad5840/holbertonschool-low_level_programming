#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the format string.
 * @format: A list of types of arguments passed to the function.
 *
 * Description:
 * 'c' - char
 * 'i' - integer
 * 'f' - float
 * 's' - string (if NULL, prints "(nil)")
 * Any other character is ignored.
 * Constraints: Maximum 2 while loops and 2 if statements.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *sep = "";

	va_start(args, format);

	while (format && format[i]) /* First while loop */
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's') /* First if statement */
		{
			printf("%s", sep), sep = ", ";
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					printf("%s", str ? str : "(nil)");
					break;
			}
		}
		i++;
	}

	printf("\n"), va_end(args);
}
