#include <stdio.h>
#include "holberton.h"

/**
 * _sqrt - Tests x
 * @x: The number to test against y
 * @y: The squared number to find the square root of
 *
 * Return: -1 and x otherwise
 */

int _sqrt(int x, int y)
{
if (x > y)
return (-1);
if ((x * x) == y)
return (x);
else
return (_sqrt(++x, y));
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n: The number
 *
 * Return: -1 and otherwise the square root of n
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (-1);
return (_sqrt(1, n));
}
