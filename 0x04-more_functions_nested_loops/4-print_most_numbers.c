#include <stdio.h>
#include "holberton.h"

/**
 * print_most_numbers - prints the numbers
 * Do not print 2 and 4
 *
 *
 */

void print_most_numbers(void)
{
int i;

for (i = 48; i <= 57; i++)
if ((i != 50) && (i != 52))
_putchar (i);
_putchar ('\n');
}