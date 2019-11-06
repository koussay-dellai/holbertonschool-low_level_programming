#include "lists.h"
/**
 *sum_listint - function that returns the sum of all data in nodes
 *@head: pointer to head
 *Return: the sum of data(s)
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
