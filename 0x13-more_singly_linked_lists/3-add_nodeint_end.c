#include "lists.h"
/**
 *add_nodeint_end - add a list at the end of the linked list
 *@head: pointer to the pointer to the head
 *@n: data of the linked list
 *Return: Always success
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *current;
listint_t *node = (listint_t *)malloc(sizeof(listint_t));
if (node == NULL)
{
return (NULL);
}
node->n = n;
node->next = NULL;
if (*head == NULL)
{
*head = node;
node->next = NULL;
return (*head);
}
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = node;
return (*head);
}
