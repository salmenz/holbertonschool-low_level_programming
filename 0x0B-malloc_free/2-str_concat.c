#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - Returns a pointer to a new string
 * @s1: The string
 * @s2: The string
 * Return: Pointer to the duplicated string
 */
char *str_concat(char *s1, char *s2)
{
char *c;
int j, i, k, l;

i = 0;
while (s1[i])
i++;
j = 0;
while (s2[j])
j++;
c = malloc(i + j + 1);
if (s1 == NULL || c == NULL || s2 == NULL)
return (NULL);
for (k = 0; k < i; k++)
c[k] = s1[k];
l = 0;
for (; k < i + j; k++)
{
c[k] = s2[l];
l++;
}
return (c);
}
