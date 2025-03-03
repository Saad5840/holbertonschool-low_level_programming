#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the first element of the matrix (treated as 1D array)
 * @size: The size of the square matrix (NxN)
 */

void print_diagsums(int *a, int size)
{
int i;

int sum1 = 0;
int sum2 = 0;


for (i = 0; i < size; i++)
{
	sum1 = sum1 + a[i * size + i];
	sum2 = sum2 + a[i * size + (size - 1 - i)];

}

printf("%d, %d\n", sum1, sum2);
}
