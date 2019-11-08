#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - the value of the bit at index
 * @n: the number
 * @index: the index
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);
if ((n >> index) & 1)
return (1);
else
return (0);
}
