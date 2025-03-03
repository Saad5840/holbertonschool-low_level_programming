#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search through
 * @accept: the characters to look for in s
 *
 * Return: a pointer to the first occurrence in s of any byte in accept,
 *         or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (accept[j] == s[i])
			return (&s[i]);
	}
}
return (NULL);

}
