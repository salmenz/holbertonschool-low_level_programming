#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a new string
 * @str: The string
 *
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
char *c;
int j, i;

i = 0;
while (str[i])
i++;
c = malloc(i + 1);
if (str == NULL || c == NULL)
return (NULL);
for (j = 0; j < i; j++)
c[j] = str[j];
c[j+1] = '\0';
return (c);
}
