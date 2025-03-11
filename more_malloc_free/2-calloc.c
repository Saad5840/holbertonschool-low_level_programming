#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of elements.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to allocated memory,
 *or NULL if `malloc` fails or inputs are 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

unsigned int i;
void *ptr;
char *char_ptr;

if (nmemb == 0 || size == 0)
	return (NULL);


ptr = malloc(nmemb * size);

if (ptr == NULL)
	return (NULL);

char_ptr = (char *)ptr;

for (i = 0; i < (nmemb * size); i++)
	char_ptr[i] = 0;

return (ptr);
}
