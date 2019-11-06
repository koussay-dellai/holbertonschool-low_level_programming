#include "lists.h"
/**
 *free_list - delete the nodes of the list
 *@head: pointer to the linked list
 *Return: nothing
 */
void free_list(list_t *head)
{
list_t *temp;
temp = head;
while (head != NULL)
{
temp = head->next;
free(head);
head = temp->next;
}
}
