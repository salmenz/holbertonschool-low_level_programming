#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @number: The number to be checked
 *
 * Return: The last digit of the number
 */

int print_last_digit(int number)
{
	int lastdig = (number % 10);

	if (lastdig < 0)
		lastdig = lastdig * -1;

	_putchar((lastdig) + '0');

	return (lastdig);
}
