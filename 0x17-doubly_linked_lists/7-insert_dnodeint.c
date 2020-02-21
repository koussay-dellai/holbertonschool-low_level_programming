#include "lists.h"
/**
 *insert_dnodeint_at_index - function to add a node at an index
 *@h: pointer to head
 *@idx: index of the neww node beginning from 0
 *@n: data
 *Return: always success
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
if (h == NULL)
return(NULL);
unsigned int i;
 if (idx == 0)
{
return(add_dnodeint(h, n));
}
dlistint_t *new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
dlistint_t *temp = *h;
for (i = 0; i < (idx-1); i++)
temp = temp->next;
 new->data = n;
 new->next = temp->next;
 temp->next->prev = new;
 temp->next = new;
 new->prev = temp;
