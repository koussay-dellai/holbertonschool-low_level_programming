#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 * @a : pointer to a .
 * @b : pointer to b .
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
