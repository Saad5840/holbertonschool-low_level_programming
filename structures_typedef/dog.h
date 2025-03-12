#ifndef DOG_H
#define DOG_H


/**
 * struct dog - Structure to store dog information
 * @name: Dog's name (string)
 * @age: Dog's age (float)
 * @owner: Dog's owner (string)
 */


struct dog
{
char *name;
float age;
char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);
#endif
