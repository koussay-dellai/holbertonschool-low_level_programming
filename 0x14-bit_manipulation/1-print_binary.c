#include "holberton.h"
/**
 * print_binary - function to convert number to binary
 * @n: unsigned long int
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
unsigned long int pow;
unsigned int size = sizeof(n) * 8;
unsigned int num;
unsigned int set = 1;
count = 0;
while (num < size)
{
pow = (n << 1);
pow >>= 1;
if (n != pow)
{
set = 0;
write(1, "1", 1);
}
else if (!set)
{
write(1, "0", 1);
}
n <<=  1;
num++;
}
if (set == 1)
write(1, "0", 1);
}
