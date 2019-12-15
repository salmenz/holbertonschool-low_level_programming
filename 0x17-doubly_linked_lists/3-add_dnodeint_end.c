#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - add a node at the end
 * @head: A pointer of the first node of the list
 * @n : integer to add
 * Return: pointer to the last node of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *p, *last;

p = malloc(sizeof(dlistint_t));
if (p == NULL)
return (NULL);
last = *head;
p->n = n;
p->next = NULL;
if (*head == NULL)
{
*head = p;
p->prev = NULL;
return (p);
}
while (last->next)
last = last->next;
last->next = p;
p->prev = last;
return (p);
}
