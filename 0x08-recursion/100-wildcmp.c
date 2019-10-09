#include "holberton.h"
#include <stdio.h>

/**
 * wildcmp - Compares strings
 * 
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: 1 if considered identical and 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
if ((*s1 == '\0' && *s2 == '\0') || (*s2 == '*' && *(s2 + 1) == '\0'))
return (1);
if (*s2 == '*')
return (wildcmp(s1, s2 + 1));
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if ((*s2 != '*' && *s2 != '\0') && *s1)
return (wildcmp(s1 + 1, s2));
return (0);
}
