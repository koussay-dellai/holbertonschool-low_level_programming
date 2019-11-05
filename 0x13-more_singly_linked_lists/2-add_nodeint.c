#include "lists.h"
/**
*add_nodeint - add a node at the beginning of a list
*@head: the address of the first ,ode of the list
*@n: data of the node
*Return: adrress of the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *first = (listint_t *)malloc(sizeof(listint_t));
if (first == NULL)
{
return (NULL);
}
first->n = n;
first->next = *head;
*head = first;
return (*head);
}
