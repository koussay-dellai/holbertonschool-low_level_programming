#include "holberton.h"
/**
  *rev_string - reverses array
  *@a:
  *@z:
  *@y:
  *@s:array to be reversed
 *Return: Nothing
  */
void rev_string(char *s)
{
	char y;
	int a, z = 0;

	a = 0;
	while (s[a])
		a++;
	for (z = 0; z < a / 2; z++)
	{
		y = s[a - z - 1];
		s[a - z - 1] = s[z];
		s[z] = y;

	}

	}
