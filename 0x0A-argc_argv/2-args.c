#include <stdio.h>
/**
 *main - function to print the arguments
 *@argc: number of arguments
 *@argv: array that contains argumenyts
 *Return: always success
 */
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
