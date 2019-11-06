#include "lists.h"
/**
 *free_listint - delete (free) all nodes
 *@head: pointer to the first node
 *Return: nothing
 */
void free_listint(listint_t *head)
{
listint_t *current_node = NULL;
while (head != NULL)
{
current_node = head;
head = head->next;
free(current_node);
}
}
