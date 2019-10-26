#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - print numbers
 *@separator: pointer to string
 *@n: number of arguments
 *Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; i < n; i++)
{
if (*separator != '\n')
{
printf("%s", separator);
printf("%d", va_arg(ap, int));
}
else
printf("%d", va_arg(ap, int));
}
printf("\n");
va_end(ap);
return;
}
