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
listint_t *p, *h;
unsigned int i = 0;

if (*head == NULL)
return (NULL);
p = malloc(sizeof(listint_t));
h = *head;
if (p == NULL)
return (NULL);
while (h)
{
if (i == idx - 1)
{
p->n = n;
p->next = h->next;
h->next = p;
return (p);
}
h = h->next;
i++;
}
return (NULL);
}
