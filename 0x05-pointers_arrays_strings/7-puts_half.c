#include <stdio.h>
#include "holberton.h"

/**
 * puts_half - Prints a string followed by a new line to stdout
 * @str: The string to be printed
 */

void puts_half(char *str)
{
int i, j;

i = 0;
while (str[i] != '\0')
i++;
for (j = (i / 2) - 1; j < i; j++)
_putchar (*(str + j));
}
