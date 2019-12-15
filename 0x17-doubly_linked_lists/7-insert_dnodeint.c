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
dlistint_t *new;
dlistint_t *c = *h;
dlistint_t *e = *h;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
if (*h == NULL && idx > 0)
return (NULL);
while (e->next != NULL)
e = e->next;
new->n = n;
if (idx == 0)
{
add_dnodeint(h, n);
return (new);
}
while ((i < idx - 1) && (c != NULL))
{
c = c->next;
i++;
}
if (c == e)
{
add_dnodeint_end(h, n);
return (new);
}
else if (c != NULL)
{
new->next = c->next;
new->prev = c;
if (c->next != NULL)
c->next->prev = new;
c->next = new;
return (new);
}
return (NULL);
}
