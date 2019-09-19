#include <stdio.h>
/**
 *main - alphabet in reverse
 *Description: print the alphabet backwards using
 *putchar
 *Return: 0 if true
 */
int main(void)
{
int x;
for (x = 'z'; x >= 'a'; x--)
putchar(x);
putchar('\n');
return (0);
}
