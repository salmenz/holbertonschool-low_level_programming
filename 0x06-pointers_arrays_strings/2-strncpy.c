#include <stdio.h>

/**
 * _strncat - Returns the length of a string
 * @dest: The string whose length will be returned
 * @src : String
 * @i : integer
 * Return: The length of the string
 */
char *_strncpy(char *dest, char *src, int n)
{
int k = 0;

while ((src[k] != '\0') && (k < n))
{
*(dest + k) = *(src + k);
k++;
}

while (k < n-1)
{
*(dest + k) = '\0';
k++;
}
return (dest);
}
