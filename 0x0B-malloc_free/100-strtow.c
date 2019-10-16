#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* free_m - frees 2d array
* @m: 2d array of char
* @height: height
*/
void free_m(char **m, unsigned int height)
{
if (m != NULL && height != 0)
{
for (; height > 0; height--)
free(m[height]);
free(m[height]);
free(m);
}
}

/**
* strtow - splits a string into words.
* @str: string.
*
* Return: pointer of an array of integers
*/
char **strtow(char *str)
{
char **c;
unsigned int k, height, i, j, l;

if (str == NULL || *str == '\0')
return (NULL);
for (k = height = 0; str[k] != '\0'; k++)
if (str[k] != ' ' && (str[k + 1] == ' ' || str[k + 1] == '\0'))
height++;
c = malloc((height + 1) * sizeof(char *));
if (c == NULL || height == 0)
{
free(c);
return (NULL);
}
for (i = l = 0; i < height; i++)
{
for (k = l; str[k] != '\0'; k++)
{
if (str[k] == ' ')
l++;
if (str[k] != ' ' && (str[k + 1] == ' ' || str[k + 1] == '\0'))
{
c[i] = malloc((k - l + 2) * sizeof(char));
if (c[i] == NULL)
{
free_m(c, i);
return (NULL);
}
break;
}
}
for (j = 0; l <= k; l++, j++)
c[i][j] = str[l];
c[i][j] = '\0';
}
c[i] = NULL;
return (c);
}
