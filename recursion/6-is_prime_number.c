#include "main.h"

/**
 * check_prime - Recursively checks if a number is prime
 * @n: The number to check
 * @div: The divisor to check divisibility
 *
 * Return: 1 if prime, 0 otherwise
 */

int check_prime(int n, int div)
{

if (div * div > n)
	return (1);

if (n % div == 0)
	return (0);

return (check_prime(n, div + 1));
}


/**
 * is_prime_number - Determines if a number is prime
 * @n: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{

if (n < 2)
        return (0);

return (check_prime(n, 2));
}
