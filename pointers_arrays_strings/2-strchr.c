#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: pointer to first occurrence of c or NULL if not found
 */

char *_strchr(char *s, char c)
{

int i;

for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] == c)
		return (&s[i]);
}

if (s[i] == c)
	return (&s[i]);

return (NULL);

}
