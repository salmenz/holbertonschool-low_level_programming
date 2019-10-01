#include <stdio.h>
#include "holberton.h"

/**
 * puts_half - Prints a string followed by a new line to stdout
 * @str: The string to be printed
 */

void puts_half(char *str)
{
int length = 0;
int number = 0;

while (str[number++])
{
length++;
}
if (length % 2 == 0)
{
length = length / 2;
}
else
{
length = (length - 1) / 2;
length = (length + 1);
}
number = length;
while (str[length++])
{
_putchar(str[number++]);
}
_putchar('\n');
}
