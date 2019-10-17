#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: values
 *
 * Return: A pointer
 */

void *malloc_checked(unsigned int b)
{
void *t;

t = malloc(b);
if (t == NULL)
exit(98);
return (t);
}
