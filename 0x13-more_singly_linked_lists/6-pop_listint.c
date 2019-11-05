#include "lists.h"
/**
 * pop_listint - delete head and return his data
 * @head:the first node of the list
 */
int pop_listint(listint_t **head)
{
int n;

if (*head == NULL)
return (0);
n = (*head)->n;
*head = (*head)->next;
return (n);
}
