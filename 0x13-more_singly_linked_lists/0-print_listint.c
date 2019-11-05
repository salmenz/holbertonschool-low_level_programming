#include <stdio.h>
#include "lists.h"
/**
 * print_listint -print nodes and return nbr of nodes
 * @h: first node of the list
 * Return: nbr of nodes.
 */
size_t print_listint(const listint_t *h)
{
int l = 0;
if (h == NULL)
return (0);
while (h)
{
printf("%d\n", h->n);
l++;
h = h->next;
}
return (l);
}
