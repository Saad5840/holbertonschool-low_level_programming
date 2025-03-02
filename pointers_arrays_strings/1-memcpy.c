#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Pointer to the destination memory where bytes are copied to
 * @src: Pointer to the source memory where bytes are copied from
 * @n: Number of bytes to copy
 *
 * Description: Copies `n` bytes from `src` to `dest`.
 * Does not handle overlapping memory regions.
 *
 * Return: Pointer to `dest`
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;


	for (i = 0; i < n; i++)
	{
		dest[i] =  src[i];
	}

	return (dest);
}
