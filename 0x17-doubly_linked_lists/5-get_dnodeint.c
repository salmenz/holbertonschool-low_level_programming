#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of the list
 * @head: the first node of the list
 * @index: the index of the node that will reuterns
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int n = 0;

if (head == NULL)
return (NULL);
while (head)
{
if (index == n)
return (head);
head = head->next;
n++;
}
return (NULL);
}
