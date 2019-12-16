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
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
