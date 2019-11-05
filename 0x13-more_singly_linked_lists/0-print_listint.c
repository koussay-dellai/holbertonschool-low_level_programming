#include "lists.h"
/**
 *print_listint - print number of nodes
 *@h: pointer to the head
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
int count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
