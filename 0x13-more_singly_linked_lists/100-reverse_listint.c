#include <stdio.h>
#include "lists.h"
/**
* reverse_listint - reverses a list.
* @head: the first node of the list
* Return: pointer
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *p = NULL, *l = NULL;
while (*head != NULL)
{
l = (*head)->next;
(*head)->next = p;
p = *head;
*head = l;
}
*head = p;
return (*head);
}
