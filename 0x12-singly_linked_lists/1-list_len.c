#include "lists.h"

/**
 *list_len - return the number of elemnts
 *@h: pointer the list
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
unsigned int i;
const list_t *next_pointer = NULL;
next_pointer = h;
while ((next_pointer->next) != NULL)
{
i++;
}
return (i);
}
