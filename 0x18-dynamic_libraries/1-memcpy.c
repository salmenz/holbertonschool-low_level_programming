#include "holberton.h"

/**
 * _memcpy - Copy n bytes
 * @dest: To be changed
 * @src: To be copied
 * @n: NBR of bytes to copie
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int l = 0;

while (l < n)
{
dest[l] = *src;
l++;
src++;
}
return (dest);
}
