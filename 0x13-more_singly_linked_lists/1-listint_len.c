#include "lists.h"
/**
 *listint_len - print the number of nodes
 *@h: pointer to the head
 *Return: Always success
 */
size_t listint_len(const listint_t *h)
{
unsigned int count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
