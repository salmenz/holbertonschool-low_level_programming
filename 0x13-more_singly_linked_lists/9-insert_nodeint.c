#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node in nth index at a linked list
 * @head: the first node in the list
 * @idx: the index of the node added
 * @n: the integer to insert into the data node
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *p;
unsigned int i;

new = malloc(sizeof(listint_t));
p = *head;
if (new == NULL || *head == NULL)
return (NULL);
new->n = n;
for (i = 0; i < idx -1; i++)
p = p->next;
new->next = p->next;
p->next = new;
return (new);
}
