#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0 (Sucess)
**/
int main(void)
{
int x, z;
for (x = '0'; x <= '9'; x++)
for (z = '0'; z <= '9'; z++)
{
putchar(x);
putchar(z);
if (x != '9' || z != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
