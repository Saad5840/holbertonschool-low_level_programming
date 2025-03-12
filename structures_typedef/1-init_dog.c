#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a struct dog variable.
 * @d: Pointer to struct dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 *
 * Description: Initializes a struct dog instance with given values.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
	return;

d->name = name;
d->age = age;
d->owner = owner;

}
