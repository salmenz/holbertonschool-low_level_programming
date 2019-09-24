#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
