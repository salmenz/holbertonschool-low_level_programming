#include <stdio.h>
#include "holberton.h"

/**
 * print_diagonal - Prints the last digit of a number
 * @n: The number to be checked
 *
 * Return: The last digit of the number
 */

void print_diagonal(int n)
{
int i;

if (n > 0)
{
while (i < n - 1)
{
_putchar ('_');
i++;
}
_putchar ('\\');
_putchar ('\n');
}
else
_putchar ('\n');
}
