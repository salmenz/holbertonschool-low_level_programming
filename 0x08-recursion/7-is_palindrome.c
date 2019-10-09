#include "holberton.h"
/**
* _strlen_recursion - length
*@s: string
*Return: length of a string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (1 + _strlen_recursion(s));
}

/**
* palindrome - step to verify palindrome
*@s: string
*@l: length
*Return: value
*/
int palindrome(char *s, int l)
{
if (l <= 1)
return (1);
else if (*s == *(s + l - 1))
return (palindrome(s + 1, l - 2));
else
return (0);
}

/**
* is_palindrome - verify palindrome
*@s: string
*Return: 1 if palindrome and 0 if is not
*/
int is_palindrome(char *s)
{
int l;

l = _strlen_recursion(s);
if (l <= 1)
return (1);
return (palindrome(s, l));
}
