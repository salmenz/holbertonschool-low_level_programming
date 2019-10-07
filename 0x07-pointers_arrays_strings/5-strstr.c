#include "holberton.h"

/**
 * _strstr - Finds the first occurence
 * @haystack: The string
 * @needle: The substring
 *
 * Return: Pointer
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *h = haystack;
char *n = needle;

while (*haystack && *n && *haystack == *n)
{
haystack++;
n++;
}
if (!*n)
return (h);
haystack = h + 1;
}
return (0);
}
