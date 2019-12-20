#include "lists.h"
/**
 *print_dlistint - return the size of a doubly linked list
 *@h: a doubly linked list
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t res = 0; 
while (h != NULL) 
{ 
res++; 
h = h->next; 
} 
return (res); 
}
