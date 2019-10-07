#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - diagonals of a square
 * @a: The square
 * @size: The size
 */

void print_diagsums(int *a, int size)
{
int i, j, s1 = 0, s2 = 0;

for (i = 0, j = 0; i < size; i++, j++)
{
s1 += *(a + i * size + j);
s2 += *(a + i * size + (size - 1 - j));
}
printf("%d, %d\n", s1, s2);
}
