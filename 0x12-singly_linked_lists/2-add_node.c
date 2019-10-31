#include "lists.h"
#include <string.h>
/**
 * add_node - Adds a new node at the begining
 * @head: A pointer to the top of list_t head
 * @str: A pointer to string
 *
 * Return: Address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
int l;
list_t *new;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
if (!str)
l = 0;
else
{
for (l = 0; str && str[l]; l++)
;
}
if (!str)
new->str = NULL;
else
new->str = strdup(str);
new->len = l;
new->next = *head;
*head = new;
return (new);
}
