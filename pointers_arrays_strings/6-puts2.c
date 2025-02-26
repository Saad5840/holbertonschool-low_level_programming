#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)  /* Only print characters at even indices */
            _putchar(str[i]);
    }
    _putchar('\n');  /* Ensure newline at the end */
}
