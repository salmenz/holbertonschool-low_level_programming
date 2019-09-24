#include "holberton.h"
/**
* print_last_digit - takes the last digit of a number
* @r: number recieved
*
*Return: 1 a letter 0 otherwise
*/
int print_last_digit(int i)
{
int p;

p = i % 10;
if (p < 0)
p = p * -1;
_putchar ((p) + '0');
return (p);
}
