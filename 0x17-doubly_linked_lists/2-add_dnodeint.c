#include "lists.h"
/**
 *add_dnodeint - function to return the address of the new node
 *@head: pointer to head
 *@n: data in the new node
 *Return: always success
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
if (head == NULL)
return (NULL);
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->next = *head;
new_node->prev = NULL;
new_node->n = n;
if (*head != NULL)
(*head)->prev = new_node;
*head = new_node;
return (new_node);
}
