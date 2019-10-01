#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - Prints a string followed by a new line to stdout
 * @s: The string to be printed
 */

void rev_string(char *s)
{
int j, i;
char c;
j = 0;
while (*(s + j) != '\0')
j++;
j--;
for (i = 0; i < j; i++)
{
c = *(s + j);
*(s + j) = *(s + i);
*(s + i) = c;
j--;
}
}
