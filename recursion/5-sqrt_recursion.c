#include "main.h"

/**
 * sqrt_helper - Recursively checks for the square root
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The square root, or -1 if not a perfect square
 */

int sqrt_helper(int n, int guess)
{
if (guess * guess == n)
	return (guess);

if (guess * guess > n)
	return (-1);

return (sqrt_helper(n, guess + 1));
}


/**
 * _sqrt_recursion - Computes the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root, or -1 if no natural square root exists
 */


int _sqrt_recursion(int n)
{

if (n < 0)
	return (-1);

if (n == 0 || n == 1)
	return (n);


return (sqrt_helper(n, 1));
}
