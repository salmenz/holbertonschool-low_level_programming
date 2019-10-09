#include <stdio.h>
#include "holberton.h"

/**
 * factorial - Returns the factorial of n
 * @n: The integer
 *
 * Return: The factorial of the string
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
