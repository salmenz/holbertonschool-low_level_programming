#include <stdio.h>
#include "holberton.h"

/**
 * print_square - Prints the last digit of a number
 * @size: The number to be checked
 *
 * Return: The last digit of the number
 */

void print_square(int size)
{
int j, i;

if (size > 0)
{
for (i = 0; i < size; i++)
{
_putchar ('\n');
for (j = 0; j < size; j++)
{
_putchar ('#');
}
}
}
else
_putchar ('\n');
}
