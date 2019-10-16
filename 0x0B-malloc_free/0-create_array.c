#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *create_array - create an arrayr
 *@size: number of element of the arrayr
 *@c: type of element in the array
 *Return: string created successfully
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;
if (size == 0)
{
return (NULL);
}
s = malloc((size) * sizeof(char));
if (s == NULL)
{
return (NULL);
}
i = 0;
while (i < size)
{
s[i] = c;
i++;
}
s[i] = c;
return (s);
}
