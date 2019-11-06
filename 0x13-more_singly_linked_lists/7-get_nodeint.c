#include "lists.h"
/**
 *get_nodeint_at_index - this funtion returns only the node requested by index
 *@head: pointer to the first node
 *@index: the reference of the node starting from 0
 *Return: return the node requested or 0 if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
if (head == NULL)
{
return (NULL);
}
while (head != NULL)
{
if (count == index)
{
return (head);
}
head = head->next;
count++;
}
return (NULL);
}
