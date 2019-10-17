#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array from min to max
 * @min: The first number
 * @max: The last number
 * Return: A pointer
 */

int *array_range(int min, int max)
{
int *t;
int i = 0;
int n;

if (min > max)
return (NULL);
t = malloc(sizeof(int) * ((max - min) + 1));
if (t == NULL)
return (NULL);
n = min;
while (i <= (max - min))
{
t[i] = n;
i++;
n++;
}
return (t);
}
