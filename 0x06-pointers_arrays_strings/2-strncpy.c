#include <stdio.h>

/**
 * _strncpy - Returns the length of a string
 * @dest: The string whose length will be returned
 * @src : String
 * @n : integer
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
while (k < n)
{
*(dest + k) = '\0';
k++;
}
return (dest);
}
