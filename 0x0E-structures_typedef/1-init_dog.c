#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - initialize a variable of type strcut dog
 *@d: variable of type dog
 *@name: pointer to a char
 *@age: variable of type float
 *@owner: pointer to a char
 *Return: Nothinig
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
return;
}
