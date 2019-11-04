#include "lists.h"

/**
*add_node - function to add a node
*@head: pointer to pointer to head
*@str: string to be duplicated
*Return: Always success
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *temp = NULL;
unsigned int count = 0;
temp = malloc(sizeof(list_t));
if (temp == NULL)
{
return (NULL);
}
while (str[count] != '\0')
{
count++;
}
temp->len = count;
temp->str = strdup(str);
temp->next = *head;
*head = temp;
return (*head);
}
