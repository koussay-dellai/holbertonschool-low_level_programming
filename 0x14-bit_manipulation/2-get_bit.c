#include "holberton.h"
/**
 * get_bit - function to get bit at index
 * @n: unsigned long int
 * @index: unsigned int type
 * Return: the n'th bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int pow =  1;
if (index > sizeof(n) * 8)
return (-1);
pow <<= index;
if (pow &  n)
return (1);
else
return (0);
}
