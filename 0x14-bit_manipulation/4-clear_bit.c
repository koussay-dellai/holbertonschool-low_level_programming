#include "holberton.h"
/**
 * clear_bit - function to unset bit
 * @n: unsigned  long int input
 * @index: index of the bit to unset
 * Return:  1 if true or -1 if false
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int pow = 1;
unsigned int size = sizeof(n) * 8;
if (*n == '\0')
return (-1);
if (index > size)
return (-1);
pow <<= index;
*n &= ~check;
return (1);
}
