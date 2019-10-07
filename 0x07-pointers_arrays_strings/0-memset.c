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
unsigned int length = 0;

while (length <= n - 1)
{
s[length] = b;
length++;
}
return (s);
}
}
