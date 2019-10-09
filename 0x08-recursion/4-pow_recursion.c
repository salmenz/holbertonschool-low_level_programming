#include <stdio.h>
#include "holberton.h"

/**
 * _pow_recursion - Returns the length of a string
 * @x: int
 * @y: int
 * Return: returns the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else
if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
