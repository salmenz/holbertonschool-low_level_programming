#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a matrice
 * @width: int
 * @height: int
 * Return: Pointer to the matrice
 */
int **alloc_grid(int width, int height)
{
int **m;
int j, i;

if (width <= 0 || height <= 0)
return (NULL);
m = malloc(height * sizeof(int *));
if (m == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
m[i] = malloc(width * sizeof(int));
if (m[i] == NULL)
{
while (i >= 0)
{
free(m[i]);
i--;
}
free(m);
return (NULL);
}
for (j = 0; j < width; j++)
m[i][j] = 0;
}
return (m);
}
