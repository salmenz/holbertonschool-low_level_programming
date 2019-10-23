#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Search for an integer by another function
 * @array: The array
 * @size: Size of array
 * @cmp: The function pointer to the integer
 *
 * Return: Index of first element when secc or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
if (cmp(array[i]))
return (i);
return (-1);
}
