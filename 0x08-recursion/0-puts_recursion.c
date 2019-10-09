#include "holberton.h"
/**
 *_puts_recursion - recursion function that prints a string.
 *@s: pointer to string .
 *description: print a string and new line without a loop.
 *return: always success.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
