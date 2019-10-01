#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - Prints a string followed by a new line to stdout
 * @s: The string to be printed
 */

void rev_string(char *s)
{
char c[10];
int i, j, k;

j = 0;
while (s[j] != '\0')
j++;
k = 0;
for (i = j - 1; i >= 0; i--)
{
c[k] = s[i];
k++;
}
for (k = 0; k <= j - 1; k++)
s[k] = c[k];
}
