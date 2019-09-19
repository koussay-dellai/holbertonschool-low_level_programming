#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0 (Sucess)
**/
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
if (x != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
