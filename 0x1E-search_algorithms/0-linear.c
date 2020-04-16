
#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - Linear search algorithm
 * @array: array
 * @size: size of array
 * @value: value to search
 *
 * Return: index of value, or -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (array == NULL)
return (-1);

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
