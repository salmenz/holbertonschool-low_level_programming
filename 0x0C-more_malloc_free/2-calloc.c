#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocat an array in ram
 * @nmemb: Nbr of elements
 * @size: Size
 *
 * Return: A pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *t;
char *p;
unsigned int i = 0;

if (nmemb == 0 || size == 0)
return (NULL);
t = malloc(size * nmemb);
if (t == NULL)
return (NULL);
p = t;
while (i < (nmemb * size))
{
p[i] = '\0';
i++;
}
return (p);
}
