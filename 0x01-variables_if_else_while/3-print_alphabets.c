#include <stdio.h>
/**
 *main-print alphabet
 *Description: printing alphabet lowercase and uppercase
 *from a to z and from A to Z
 *Return: 0
 */
int main(void)
{
int char1, char2;
 for (char1 = 'A'; char1 <= 'Z'; char1++);

putchar(char1);

 for (char2 = 'a'; char2 <= 'z'; char2++);

putchar(char2);

putchar('\n');
return (0);
}
