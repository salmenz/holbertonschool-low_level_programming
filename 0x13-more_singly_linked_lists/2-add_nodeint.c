#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - add a node at the beggining
 * @head: A pointer of the first element of the list
 * @n : integer to add
 * Return: pointer to the new head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *p;

p = malloc(sizeof(listint_t));
if (p == NULL)
return (NULL);
p->n = n;
p->next = *head;
*head = p;
return (*head);
}
