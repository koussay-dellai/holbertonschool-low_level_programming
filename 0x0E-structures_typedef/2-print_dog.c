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
printf("%s\n", d->name);
printf("%g\n", d->age);
if (d->owner == NULL)
printf("owner: (nil)");
printf("%s\n", d->owner);
return;
}
