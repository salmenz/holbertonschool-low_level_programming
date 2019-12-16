#include <stdio.h>

/**
 * _strncat - Returns the length of a string
 * @dest: String
 * @src : String
 * @n : int
 * Return: The length of the string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, k;

i = 0;
while (dest[i] != '\0')
i++;
k = 0;
j = i;
while ((src[k] != '\0') && ((j - i) < n))
{
*(dest + j) = *(src + k);
j++;
k++;
}
*(dest + j) = '\0';
return (dest);
}
