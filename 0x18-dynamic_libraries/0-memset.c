#include <stdio.h>
#include "holberton.h"

/**
 * _memset - Returns the length of a string
 * @s: The string
 * @b: char
 * @n: int
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int l = 0;

while (l <= n - 1)
{
s[l] = b;
l++;
}
return (s);
}
