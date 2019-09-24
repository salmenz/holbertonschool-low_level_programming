#include <stdio.h>
#include "holberton.h"

/**
 * print_times_table - Print times table of n
 * @n: The number passed to the function
 */

void print_times_table(int n)
{
	int column;
	int row;
	int product;

	for (column = 0; column <= n; column++)
	{
		if (n >= 15 || n < 0)
			break;

		for (row = 0; row <= n; row++)
		{
			product = (column * row);

			if (product >= 100)
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
			}
			else if (product >= 10)
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
			}
			else if (row == 0)
				;
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar((product % 10) + '0');
			if (row != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
