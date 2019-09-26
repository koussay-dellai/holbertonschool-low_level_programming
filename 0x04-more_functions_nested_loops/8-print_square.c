#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size : variable of the square .
 * Return: Always 0.
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}
int i;
int j;
for (i = 0 ; i < size ; i++)
{
for (j = 0 ; j < size ; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
