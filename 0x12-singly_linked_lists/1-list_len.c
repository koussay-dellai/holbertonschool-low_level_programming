#include "lists.h"

/**
 *list_len - return the number of elemnts
 *@h: pointer the list
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
unsigned int i = 0;
const list_t *next_pointer = NULL;
next_pointer = h;
while (next_pointer != NULL)
{
i++;
next_pointer = next_pointer->next;
}
return (i);
}
