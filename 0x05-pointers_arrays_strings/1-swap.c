#include <stdio.h>
#include "holberton.h"

/**
 * swap_int - Prints a string followed by a new line to stdout
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
int p;

p = *a;
*a = *b;
*b = p;
}
