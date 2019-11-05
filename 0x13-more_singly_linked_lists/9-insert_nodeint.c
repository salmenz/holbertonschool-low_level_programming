#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node in nth index at a linked list
 * @head: the first node in the list
 * @idx: the index of the node added
 * @n: the integer to insert into the data node
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *p, *new;
unsigned int i = 0;

p = *head;
if (head == NULL && idx != 0)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
while (i < idx - 1)
{
p = p->next;
if (p == NULL)
{
free(new);
return (NULL);
}
i++;
}
new->next = p->next;
p->next = new;
return (new);
}
