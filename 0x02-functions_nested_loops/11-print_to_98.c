#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * print_to_98 - Prints all numbers to 98
 * @n: The first number to print from
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
			n--;
		}
	}
}
