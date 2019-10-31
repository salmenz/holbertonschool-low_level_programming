#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds a new node at the end
 * @head: A pointer to the first element
 * @str: A pointer to the string
 *
 * Return: Address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int l;
	list_t *new, *last;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
last = *head;
if (str != NULL)
{
for (l = 0; str && str[l]; l++)
;
new->str = strdup(str);
}
else
new->str = NULL;
new->len = l;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (*head);
}
while (last->next != NULL)
last = last->next;
last->next = new;
return (new);
}
