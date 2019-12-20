#include "lists.h"
/**
 *dlistint_len - return the size of a doubly linked list
 *@h: a doubly linked list
 *Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t res = 0;
while (h != NULL)
{
res++;
h = h->next;
}
return (res);
}
