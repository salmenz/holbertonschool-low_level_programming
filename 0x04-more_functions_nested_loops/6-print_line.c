#include <stdio.h>
#include "holberton.h"

/**
 * print_line - Prints the last digit of a number
 * @n: The number to be checked
 *
 * Return: The last digit of the number
 */

void print_line(int n)
{
int i;

i = 0;
while (i < n)
{
_putchar ('_');
i++;
}
_putchar ('\n');
}
