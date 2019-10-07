#include "holberton.h"

/**
 * _strspn - Count bytes
 * @s: string
 * @accept: characters
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j;

while (*(s + i))
{
j = 0;
while (*(accept + j))
{
if (*(s + i) == *(accept + j))
break;
j++;
}
if (!*(accept + j))
return (i);
i++;
}
return (i);
}
