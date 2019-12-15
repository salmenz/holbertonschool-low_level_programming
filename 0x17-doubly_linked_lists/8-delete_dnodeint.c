#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - delete a node in nth index at a double linked list
 * @head: the first node in the list
 * @index: the index of the node to delete
 * Return: 1 if deleted -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *p, *last;
unsigned int i = 0, l = 0;

p = *head;
if (*head == NULL)
return (-1);
while (p->next)
{
p = p->next;
l++;
}
if (index > l)
return (-1);
p = *head;
if (index == 0 && l != 0)
{
*head = p->next;
(*head)->prev = NULL;
free(p);
return (1);
}
else if (index == 0)
{
*head = NULL;
free(p);
return (1);
}
while (i != index)
{
if ((i + 1) == index)
last = p;
p = p->next;
i++;
}
last->next = p->next;
p->next->prev = last;
free(p);
return (1);
}
