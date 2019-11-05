#include "lists.h"

/**
*add_node_end -  adding a node at the end of the list
*@head: pointer to the head pointer of the list
*@str: a contant string
*Return: always success .
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp;
unsigned int count;
list_t *temp1 = (list_t *)malloc(sizeof(list_t));
if (temp1 == NULL)
{
return (NULL);
}
temp = *head;
while (temp->next != NULL)
{
temp1 = temp->next;
}
temp1->next = NULL;
while (str[count] != '\0')
{
count++;
}
temp1->len = count;
temp1->str = strdup(str);
return (*head);
}
