#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the string.
 */

int _atoi(char *s)
{

int i;
int num = 0;
int sign = 1;


for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] == '-')
		sign = sign * -1;

	if (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		if (s[i + 1] < '0' || s[i + 1] > '9')
			break;
}
}
return num * sign;
}


