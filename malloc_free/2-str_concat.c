#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory space.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the newly allocated concatenated string,
 *         or NULL if allocation fails.
 */


char *str_concat(char *s1, char *s2)
{

char *concat;
int i, j, len1 = 0, len2 = 0;


if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

while (s1[len1] != '\0')
	len1++;

while (s2[len2] != '\0')
	len2++;


concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));

for (i = 0; i < len1; i++)
{
	concat[i] = s1[i];
}

for (j = 0; j < len2; j++)
{
	concat[i + j] = s2[j];
}

concat[i + j] = '\0';

return (concat);
}

