#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete a node in nth index at a linked list
 * @head: the first node in the list
 * @idx: the index of the node to delete
 * Return: 1 if deleted -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *p, *last;
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
free(p);
return (1);
}
