#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n : variable .
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0 ; i < n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
