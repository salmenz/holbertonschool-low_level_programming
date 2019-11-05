#include <stdio.h>
#include "lists.h"
/**
 * listint_len - nbr of nodes
 * @h: first node of the list
 * Return: nbr of nodes.
 */
size_t listint_len(const listint_t *h)
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
