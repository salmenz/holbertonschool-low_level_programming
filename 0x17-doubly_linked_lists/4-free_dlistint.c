#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - Free double linked list
 * @head: The first element
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *t;

t = head;
while (head != NULL)
{
head = head->next;
free(head);
}
free(t);
}
