#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from n to m
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
