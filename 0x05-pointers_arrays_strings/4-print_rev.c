#include <stdio.h>
#include "holberton.h"

/**
 * print_rev - Prints a reverce string followed by a new line to stdout
 * @s: The string to be printed
 */
void print_rev(char *s)
{
int i, j;

i = 0;
while (s[i] != '\0')
i++;
for (j = i - 1; j >= 0; j--)
_putchar (s[j]);
_putchar ('\n');
}
