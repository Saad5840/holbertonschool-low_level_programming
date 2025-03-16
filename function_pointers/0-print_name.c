#include <stdio.h>
#include "function_pointers.h"


/**
 * print_name - Prints a name using a given function.
 * @name: The name to print.
 * @f: A pointer to a function that takes a char * and returns nothing.
 *
 * Return: Nothing.
 */



void print_name(char *name, void (*f)(char *))
{

if (name != NULL && f != NULL)
	f(name);
}
