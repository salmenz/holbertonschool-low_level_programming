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
unsigned int i = 0;
listint_t *p, *next;

if (*head == NULL)
return (-1);
p = *head;
if (index == 0)
{
*head = p->next;
free (p);
return (1);
}
while (p && i < index -1)
{
p = p->next;
i++;
}
if (p->next == NULL || p == NULL)
return (-1);
next = p->next->next;
p->next = next;
free (p->next);
return (1);
}
