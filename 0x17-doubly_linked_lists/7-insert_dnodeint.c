#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node in nth idx at a double linked list
 * @h: the first node in the list
 * @idx: the index of the node added
 * @n: the integer to insert into the data node
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *p;
dlistint_t *c = *h;
dlistint_t *e = *h;

p = malloc(sizeof(dlistint_t));
if (p == NULL)
return (NULL);
if (*h == NULL && idx > 0)
return (NULL);
while (e->next != NULL)
e = e->next;
p->n = n;
if (idx == 0)
{
add_dnodeint(h, n);
return (p);
}
while ((i < idx - 1) && (c != NULL))
{
c = c->next;
i++;
}
if (c == e)
{
add_dnodeint_end(h, n);
return (p);
}
else if (c != NULL)
{
p->next = c->next;
p->prev = c;
if (c->next != NULL)
c->next->prev = p;
c->next = p;
return (p);
}
return (NULL);
}
