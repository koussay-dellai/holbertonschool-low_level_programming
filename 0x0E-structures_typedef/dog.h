#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>



/**
 *struct dog - structure
 *@name: pointer to string
 *@age: pointer to float
 *@owner: pointer to char
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
