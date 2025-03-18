#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the format provided.
 * @format: A list of types of arguments passed to the function.
 *
 * Description: Supports the following format specifiers:
 * 'c' - char
 * 'i' - integer
 * 'f' - float
 * 's' - string (if NULL, prints "(nil)")
 * Any other character is ignored.
 */

void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str, *sep = "";

va_start(args, format);

while (format && format[i])
{
	if (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's')
	{
		printf("%s", sep);
		sep = ", ";

		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			printf("%s", str);
		}
	}
	i++;
}

printf("\n");
va_end(args);
}
