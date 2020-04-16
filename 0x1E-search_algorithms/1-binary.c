#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * rec_search - helps me
 * @array: array
 * @d: debut
 * @f: fin
 * @value: value
 *
 * Return: index
 */
int rec_search(int *array, size_t d, size_t f, int value)
{
size_t i;
int m;

printf("Searching in array: ");
for (i = d; i <= f; i++)
{
printf("%d", array[i]);
if (i < f)
printf(", ");
if (i == f)
printf("\n");
}
m = ((d + f) / 2);
if (array[m] == value)
return (m);
if (f > d)
{
if (value < array[m])
return (rec_search(array, d, m - 1, value));
else if (value > array[m])
return (rec_search(array, m + 1, f, value));
}
return (-1);
}

/**
 * binary_search - searching algo
 * @array: array
 * @size: sizh
 * @value: value
 *
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
if (array == NULL)
return (-1);
return (rec_search(array, 0, size - 1, value));
}
