#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the details of a struct dog.
 * @d: Pointer to struct dog.
 *
 * Description: Prints the dog's name, age, and owner.
 * If an element is NULL, it prints (nil).
 */

void print_dog(struct dog *d)
{

if (d == NULL)
	return;

if (d->name == NULL)
	printf("Name: (nil)\n");
else
	printf("Name: %s\n", d->name);


printf("Age: %f\n", d->age);

if (d->owner == NULL)
	printf("Owner: (nil)\n");
else
	printf("Owner: %s\n", d->owner);

}
