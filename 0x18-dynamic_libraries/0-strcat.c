#include <stdio.h>
#include "holberton.h"

/**
 * _strcat - Returns the length of a string
 * @dest: String
 * @src : String
 * Return: The length of the string
 */
char *_strcat(char *dest, char *src)
{
int i, j, k;

i = 0;
while (dest[i] != '\0')
i++;
k = 0;
j = i;
while (src[k] != '\0')
{
*(dest + j) = *(src + k);
j++;
k++;
}
*(dest + j) = '\0';
return (dest);
}
