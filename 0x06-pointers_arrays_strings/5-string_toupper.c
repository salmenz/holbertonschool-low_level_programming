#include "holberton.h"
/**
 * string_toupper - function
 * @c: function input
 *
 * Return: always 0
 */
char *string_toupper(char *c)
{
int i;

for (i = 0; c[i] != '\0'; i++)
{
if (c[i] >= 'a' && c[i] <= 'z')
c[i] = c[i] - 32;
}
return (c);
}
