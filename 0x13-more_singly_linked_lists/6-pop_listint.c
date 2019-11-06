#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete head and return his data
 * @head:the first node of the list
 * Return: data of the node deleted
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *p;

p = *head;
if (*head == NULL || !head)
return (0);
n = (*head)->n;
*head = (*head)->next;
free(p);
return (n);
}
