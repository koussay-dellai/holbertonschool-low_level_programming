#include "lists.h"

/**
*add_node_end -  adding a node at the end of the list
*@head: pointer to the head pointer of the list
*@str: a contant string
*Return: always success .
*/

list_t *add_node_end(list_t **head, const char *str)
{
unsigned int count = 0;
list_t *new = (list_t *)malloc(sizeof(list_t));
list_t *current = NULL;
if (new == NULL)
{
return (NULL);
}
while (str[count] != '\0')
{
count++;
}
new->str = strdup(str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
new->len = count;
new->next = NULL;
return (*head);
}
current = *head;
while (current->next != NULL)
{
current = current->next;
}
new->next = NULL;
current->next = new;
new->len = count;
return (*head);
}
