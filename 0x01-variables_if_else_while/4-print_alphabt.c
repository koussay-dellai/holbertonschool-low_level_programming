#include <stdio.h>

/**
 *main - putchar alphabet
 *Description: print alphabet except q and e
 *case
 *Return: 0 if true
 */
int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
if (x != 'e' && x != 'q')
putchar(x);
putchar('\n');
return (0);
}
