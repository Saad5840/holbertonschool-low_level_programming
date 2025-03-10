#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string by allocating memory dynamically.
 * @str: The input string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or memory allocation fails.
 */


char *_strdup(char *str)
{

int i;
char *duplicate;
int len = 0;


if (str == NULL)
	return (NULL);


for (len = 0; str[len] != '\0'; len++);


duplicate = (char *)malloc((len + 1) * sizeof(char));

if (duplicate == NULL)
	return (NULL);

for (i = 0; i < len; i++)
	duplicate[i] = str[i];

duplicate[len] = '\0';

return (duplicate);
}
