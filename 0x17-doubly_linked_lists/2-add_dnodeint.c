#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - add a node at the beggining
 * @head: A pointer of the first element of the list
 * @n : integer to add
 * Return: pointer to the new head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *p;

p = malloc(sizeof(dlistint_t));
if (p == NULL)
return (NULL);
p->n = n;
p->next = *head;
p->prev =NULL;
*head = p;
return (*head);
}
