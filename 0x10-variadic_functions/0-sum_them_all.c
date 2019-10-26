#include <stdarg.h>

/**
 *sum_them_all - sum all the parameters
 *@n: constant that presents the number of parametrs
 *Return: 0 or the sum result
 */

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}
va_list ap;
unsigned int i = 0;
unsigned int sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ap, unsigned int);
}
va_end(ap);
return (sum);
}
