#include <stdio.h>
#include "holberton.h"

/**
 * _strcpy - Returns the length of a string
 * @dest: The string whose length will be returned
 * @src: djjhfhd
 * Return: the string
 */

char *_strcpy(char *dest, char *src)
{
int i, j;

j = 0;
while (src[j] != '\n')
j++;
for (i = 0; i <= j; i++)
dest[i] = src[i];
return (dest);
}
