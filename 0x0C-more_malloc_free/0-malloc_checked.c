#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *malloc_checked - allocates a memo
 *@b: size of memory that will be alocated in bytes
 *Return: return a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *s;
s = malloc(b);
if (s == NULL)
{
exit(98);
}
return (s);
}
