#include "lists.h"

/**
 * free_list - Free linked list
 * @head: The first element
 */

void free_list(list_t *head)
{
list_t *t;

while (head != NULL)
{
t = head;
free(head->str);
head = head->next;
free(t);
}
}
