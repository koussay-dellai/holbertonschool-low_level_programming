#include "holberton.h"

/**
 * _strlen - check the code for Holberton School students.
 * @s : pointer to s .
 * Return: the lenght of the string .
 */

int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
