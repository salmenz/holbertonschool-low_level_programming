#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Free linked list
 * @head: The first element
 */

void free_listint(listint_t *head)
{
listint_t *t;

t = head;
while (head != NULL)
{
head = head->next;
free(head);
}
free(t);
}
