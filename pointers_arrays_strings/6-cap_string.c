#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
    int i, j;
    int capitalize = 1;
    char separators[] = " \t\n,;.!?\"(){}";

    for (i = 0; str[i] != '\0'; i++)
    {
        if (capitalize && str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;

        capitalize = 0;

        for (j = 0; separators[j] != '\0'; j++)
        {
            if (str[i] == separators[j])
            {
                capitalize = 1;
                break;
            }
        }
    }

    return (str);
}
