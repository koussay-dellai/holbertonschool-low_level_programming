#include "lists.h"

/**
 *print_list - print elements
 *@h: pointer to the list
 *Return: size of the list
 */

size_t print_list(const list_t *h)
{
int count = 0;
const list_t *current_node = NULL;
current_node = h;
while ((current_node) != NULL)
{
if ((current_node->str) == NULL)
{
printf("[0] (nil)\n");
}
printf("[%d] %s\n ", current_node->len, current_node->str);
current_node = current_node->next;
count++;
}
return (count);
}
