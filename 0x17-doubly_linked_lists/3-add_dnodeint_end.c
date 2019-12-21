#include "lists.h"

/**
 *add_dnodeint_end - function to add a node at the end of the linked list
 *@head: pointer to the head
 *@n: data fill in the node
 *Return: address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return(new);
}
dlistint_t *tail = *head;
while (tail->next != NULL)
{
tail = tail->next;
}
new->prev = tail;
tail->next = new;
return (new);
}
