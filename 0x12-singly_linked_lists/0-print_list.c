#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - Prints the linked list
 * @h: A pointer
 *
 * Return: nbr of nodes
 */
size_t print_list(const list_t *h)
{
int i = 0;

while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
i++;
}
return (i);
}
