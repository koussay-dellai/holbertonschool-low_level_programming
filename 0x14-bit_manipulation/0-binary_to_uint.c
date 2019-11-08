#include "holberton.h"
/**
 *_pow - power 
 *@y: unsigned int 2;
 *@x: unsigned ower index
 *Return: always success
 */
unsigned int _pow(unsigned int y , unsigned int x)
{
unsigned int power = 1;
unsigned int i;
for (i = 0 ; i < x ; i++)
power *= y ;
return (power);
}

/**
 *binary_to_uint - function to convert a char of 0 and 1s to an unsigned int
 *@b: pointer to char
 *Return: the return value is an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int sum = 0;
unsigned int i = 0;
unsigned int len = 0;
if (*b == '\0')
{
return (0);
}
for (i = 0 ; b[i] != '\0' ; i++)
{
if ((b[i] != '0') && (b[i] != '1'))
{
return (0);
}
len++;
}
len--;
i = 0;
while ( b[i] )
{

if (b[i] == '1')
{
sum += _pow (2, len - i );
}
i++;
}
return (sum);
}
