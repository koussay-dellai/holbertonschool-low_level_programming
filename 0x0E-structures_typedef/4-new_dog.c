#include "dog.h"

/**
 *new_dog - function to create a new dog
 *@name: pointer to char, the dog ,name 
 *@age: dog age of type float
 *@owner: pointer to char
 */


dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *new_dog;
  new_dog = malloc(sizeof(dog_t));
  if (new_dog == NULL)
    return(NULL);
  int i,j;

  for(i = 0; name!='\0';i++)
    ;
  char *copy1 = malloc(sizeof(char)*i);
  new_dog->copy1 = 
