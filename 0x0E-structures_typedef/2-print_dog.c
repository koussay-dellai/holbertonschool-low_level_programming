#include "dog.h"

/**
 *print_dog - print the strcut elements
 *@d: pointer to struct
 *Return: Nothing
 */


void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: (nil)");
printf("Name: %s\n", d->name);
printf("age: %f\n", d->age);
if (d->owner == NULL)
printf("owner: (nil)");
printf("owner: %s\n", d->owner);
return;
}
