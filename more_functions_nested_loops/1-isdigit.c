#include "main.h"

/**
* _isdigit: check if the input is a number
*
* @c: the input
*
* Return: 1 if c is an integer
*/


int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);

else
	return (0);
}
