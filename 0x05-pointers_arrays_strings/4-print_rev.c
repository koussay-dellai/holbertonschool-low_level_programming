#include "holberton.h"

/**
 * print_rev - print the string in reverse.
 * @s : pointer .
 * Return: nothing.
 */
void print_rev(char *s)
{
int i;
i = 0;
while (*(s + i) != '\0')
{
i++;
}
i = i - 1;
while (*(s + i) != '\0')
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}
