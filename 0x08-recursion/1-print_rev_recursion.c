#include <stdio.h>
#include "holberton.h"

/**
 * _puts_recursion - Prints a string
 * @s: string
 */
void _puts_recursion(char *s)
{
if (s)
{
_puts_recursion(*(s + 1));
_puts(s);
}
}
