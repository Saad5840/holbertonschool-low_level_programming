#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int num = 0;
    int found_digit = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] >= '0' && s[i] <= '9')
        {
            num = num * 10 + (s[i] - '0');
            found_digit = 1;
        }
        else if (found_digit)
            break;

        i++;
    }

    return (num * sign);
}
