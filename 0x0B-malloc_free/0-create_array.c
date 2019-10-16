#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars initialized with a specific char
 * @size: The size
 * @c: char
 *
 * Return: adresse of the array
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;

if (size == 0)
return (NULL);
s = malloc((size + 1) * sizeof(char));
if (s == NULL)
return (NULL);
i = 0;
while (i < size)
{
s[i] = c;
i++;
}
s[i] = '\0';
return (s);
}
