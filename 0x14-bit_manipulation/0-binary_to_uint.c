#include "holberton.h"
/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b: pointer to char string
 * Return: unsigned int if conditions true
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
unsigned int pow = 1;
int i;
if (b == NULL)
return (0);
x = 0;
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
count <<= 1;
if (b[i] == '1')
{
num ^= pow;
}
i++;
}
return (num);
}
