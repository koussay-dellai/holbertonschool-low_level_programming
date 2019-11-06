#include "lists.h"
/**
 *pop_listint - deltes the head node and returns the node's data
 *@head: pointer to pointer to head node, contains the head address as a value
 *Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
listint_t *current = NULL;
int data = 0;
current = *head;
if (*head == NULL)
{
return (0);
}
*head = current->next;
data = current->n;
free(current);
return (data);
}
