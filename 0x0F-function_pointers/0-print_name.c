#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - function that print a name
 *@name: pointer to char
 *@f: pointer to funtion
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
{
return;
}
f(name);
}
