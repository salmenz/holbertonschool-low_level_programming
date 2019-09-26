#include <stdio.h>
#include "holberton.h"

/**
 * print_triangle - Print right triangles
 * @size: The size of the triangle passed to the function
 *
 */

void print_triangle(int size)
{
	int triangle;
	int spaces;

	for (triangle = 1; triangle <= size; triangle++)
	{
		for (spaces = 1; spaces <= size; spaces++)
		{
			if (spaces <= size - triangle)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
