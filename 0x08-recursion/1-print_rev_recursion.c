#include <stdio.h>
#include "holberton.h"

/**
 * _puts_recursion - Prints a string
 * @s: string
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_puts_recursion(s + 1);
_putchar(*s);
}
if (*s == '0')
_putchar('\n');
}
