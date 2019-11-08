#include "holberton.h"
/**
 *print_binary - print the binary representation of a number
 *@n: the number to convert to binary
 *Return: nothing
 */

void print_binary(unsigned long int n)
{
if (n > 1) 
print_binary(n>>1); 
printf("%ld", n & 1);
}
