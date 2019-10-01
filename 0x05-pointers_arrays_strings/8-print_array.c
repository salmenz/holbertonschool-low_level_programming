#include <stdio.h>
#include "holberton.h"

/**
 * print_array - Prints a string followed by a new line to stdout
 * @a: a
 * @n: nbr of integer of the arry
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", (*(a + i)));
if (i != n - 1)
printf(", ");
}
printf("\n");
}
