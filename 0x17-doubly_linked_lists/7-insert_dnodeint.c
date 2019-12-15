#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node in nth idx at a double linked list
 * @head: the first node in the list
 * @idx: the index of the node added
 * @n: the integer to insert into the data node
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx,
int n)
{
dlistint_t *p, *new;
unsigned int i = 0;

p = *head;
if (head == NULL && idx != 0)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
p->next->prev = new;
new->prev = NULL;
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
new->prev = p;
new->next->prev = new;
p->next = new;
return (new);
}
