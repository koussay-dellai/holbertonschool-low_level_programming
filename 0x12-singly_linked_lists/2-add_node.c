#include "lists.h"

/**
*add_node - function to add a node
*@head: pointer to pointer to head
*@str: string to be duplicated
*Return: Always success
*/

list_t *add_node(list_t **head, const char *str)
{
struct list_s *temp = (list_t *)malloc(sizeof(list_t));
temp->str = strdup(str);
temp->next = NULL;
if (*head != NULL)
{
temp->next = *head;
}
if (temp != NULL)
{
*head = temp;
return (*head);
}
else
return (NULL);
}
