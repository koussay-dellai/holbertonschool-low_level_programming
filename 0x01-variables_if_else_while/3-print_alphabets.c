#include <stdio.h>
/**
 *main - print alphabet
 *Description: use putchar to print alphabet in
 *lowercase
 *Return: 0 is true
 */
int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
putchar(x);
for (x = 'A'; x <= 'Z'; x++)
putchar (x);
putchar('\n');
return (0);
}
