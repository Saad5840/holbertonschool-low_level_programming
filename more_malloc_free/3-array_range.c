#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The starting value (inclusive).
 * @max: The ending value (inclusive).
 *
 * Return: Pointer to the newly allocated array, or NULL if failure.
 */

int *array_range(int min, int max)
{
int *arr;
int i, size;


if (min > max)
	return (NULL);

size = max - min + 1;

arr = malloc(size * sizeof(int));

if (arr == NULL)
	return (NULL);


for (i = 0; i < size; i++)
	arr[i] = min + i;

return (arr);
}
