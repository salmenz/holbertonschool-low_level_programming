#include "lists.h"
/**
 * list_len - Counts the number of elements
 * @h: A pointer
 *
 * Return: nbr of elements
 */
size_t list_len(const list_t *h)
{
size_t i = 0;

while (h)
{
i++;
h = h->next;
}
return (i);
}
