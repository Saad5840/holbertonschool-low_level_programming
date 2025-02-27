#include "main.h"
#include <limits.h> 

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
    int i = 0, sign = 1;
    long num = 0;  

   
    while (s[i] && (s[i] < '0' || s[i] > '9'))
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    
    while (s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    
    num *= sign;
    if (num > INT_MAX) return INT_MAX;
    if (num < INT_MIN) return INT_MIN;

    return (int)num;
}
