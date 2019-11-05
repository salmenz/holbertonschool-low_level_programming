#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of the list
 * @head: the first node of the list
 * @index: the index of the node that will reuterns
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
