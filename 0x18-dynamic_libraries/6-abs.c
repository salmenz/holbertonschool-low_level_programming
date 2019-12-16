#include <stdio.h>
#include "holberton.h"

/**
 * _abs - Print the absolute value of an integer
 * @p: The value to be converted to absolute value
 *
 * Return: Always 0
 */

int _abs(int p)
{
	if (p < 0)
		return (-p);
	else
		return (p);
}
