#include <stdio.h>
#include "holberton.h"

/**
 * print_diagonal - Prints \ n times
 * @n: The number passed to the function
 */

void print_diagonal(int n)
{
	int diagonal = 0;
	int space = 0;

	while (diagonal < n && n >= 1)
	{
		while (diagonal > space)
		{
			_putchar(' ');
			space++;
		}
		diagonal++;
		_putchar('\\');
		_putchar('\n');
		space = 0;
	}
	if (n <= 0)
		_putchar('\n');
}
