#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *string_nconcat - concat 2 strings
*@s1: first string
*@s2: second string
*@n: number of char to concatenate
*Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int l, i, j;
char *c;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
l = 0;
while (s1[l])
l++;
c = malloc((l + (n * sizeof(*s2) + 1)) * sizeof(*c));
if (c == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
c[i] = s1[i];
for (j = 0; s2[j] != '\0' && j < n; j++, i++)
c[i] = s2[j];
c[i] = '\0';
return (c);
}
