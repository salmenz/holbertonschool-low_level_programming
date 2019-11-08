#include <math.h>
#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: the number in base 10
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int l = 0, i = 0, n = 0;

if (b == NULL)
return (0);
while (b[l] != '\0')
l++;
while (b[i])
{
if (b[i] != '1' && b[i] != '0')
return (0);
if (b[i] == '1')
n += 1 << (l - i - 1);
i++;
}
return (n);
}
