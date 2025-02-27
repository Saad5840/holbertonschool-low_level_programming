#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes to append from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{

int i = 0, j = 0;

while (dest[i] != '\0')
{
	i++;
}

for (j = 0; src[j] != '\0' && j < n; j++)
{

	dest[i] = src[j];
	i++;
}

dest[i] = '\0';

return (dest);

}

