#include "holberton.h"
/**
 * *_memset - prints buffer in hexa
 * @s: is char type
 * @b :is char type
 * @n : is int type
 * Return: adress of s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
