#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring in a string
 * @haystack: the main string to search in
 * @needle: the substring to find
 *
 * Return: a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{

unsigned int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
	if (*needle == '\0')
		return (haystack);

	for (j = 0; needle[j] != '\0'; j++)
	{
		if (needle[j] != haystack[i + j])
			break;
	}

	if (needle[j] == '\0')
		return (&haystack[i]);
}
return (NULL);
}
