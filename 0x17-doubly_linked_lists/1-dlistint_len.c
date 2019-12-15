#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - nbr of nodes
 * @h: first node of the list
 * Return: nbr of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
int l = 1;
if (h == NULL)
return (0);
while (h->next)
{
l++;
h = h->next;
}
return (l);
}
