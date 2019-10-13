#include <stdio.h>

/**
 *main - program to print number of arguments
 *@argc: number of arguments
 *@argv: pointer to arrayr of strings
 *Return: always success
 */
int main(int argc, char **argv __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
