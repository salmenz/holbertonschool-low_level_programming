#include <stdio.h>
#include "holberton.h"

/**
 * _islower - checks for lowercase characters
 * @c: Variable containing the letter to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 *
 */

int _islower(int c)
{
	int letter = c;

	if (letter < 123 && letter > 96)
		return (1);
	else
		return (0);
}
