#include <stdio.h>
#include "holberton.h"
/**
 * flip_bits -  returns the number of bits you would need to flip to get from one number to another
 * @n: integer 1
 * @m: integer 2
 * Return: nbr of bits you need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int r = 0;
unsigned long int o;

o = n ^ m;

while (o > 0)
{
if ((o & 1) != 0)
r++;
o = o >> 1;
}
return (r);
}
