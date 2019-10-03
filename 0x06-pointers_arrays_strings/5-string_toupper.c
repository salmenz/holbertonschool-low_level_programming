#include "holberton.h"
/**
 * string_toupper - function
 * @s: function input
 *
 * Return: always 0
 */
char *string_toupper(char *s)
{
int i;
while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
i++;
}
return (s);
}
