#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Number of bytes to allocate.
 *
 * Return: Pointer to allocated memory.
 *         Terminates with status 98 if allocation fails.
 */

void *malloc_checked(unsigned int b)
{

void *ptr = malloc(b);

if (ptr == NULL)
	exit(98);

return (ptr);
}
