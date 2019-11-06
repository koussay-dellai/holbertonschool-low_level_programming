#include "lists.h"
/**
 *free_listint2 - deleting all the nodes of a linked list
 *@head: pointer to pointer to the first element of the node
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *current_node = NULL;
listint_t *next_node = NULL;
if (head == NULL)
{
return;
}
current_node = *head;
while (current_node != NULL)
{
next_node = current_node->next;
free(current_node);
current_node = next_node;
}
*head = NULL;
}
