#include "dog.h"

/**
 *init_dog - initialize the element of the struct
 *@name: pointer to name
 *@d: pointer to struct
 *@age: pointer to float
 *@owner: pointer to char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
