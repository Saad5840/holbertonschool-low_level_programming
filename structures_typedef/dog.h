#ifndef DOG_H
#define DOG_H


/**
 * struct dog - Structure to store dog information
 * @name: Dog's name (string)
 * @age: Dog's age (float)
 * @owner: Dog's owner (string)
 */


typedef struct dog
{
char *name;
float age;
char *owner;

} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif
