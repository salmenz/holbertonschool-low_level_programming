#include <stdio.h>
#include "holberton.h"
/**
 * _strchr - fonction
 * @s: string
 * @c: character
 *
 * Return: A pointer
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
else if (*s != c)
return (0);
return (s);
}
