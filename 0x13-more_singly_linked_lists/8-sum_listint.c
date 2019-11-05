#include "lists.h"
/**
 * sum_listint - sum of all data nodes
 * @head: the first node of the list
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
