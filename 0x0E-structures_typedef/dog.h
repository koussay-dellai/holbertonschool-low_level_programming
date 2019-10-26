#ifndef DOG_H
#define DOG_H
/**
 *struct dog - structure
 *@name: pointer to string
 *@age: pointer to float
 *@owner: pointer to char
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);


#endif