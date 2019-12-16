#include <stdio.h>
#include "holberton.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: Variable containing the letter to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 *
 */

int _isalpha(int c)
{
	int letter = c;

	if ((letter < 123 && letter > 96) || (letter < 90 && letter > 65))
		return (1);
	else
		return (0);
}
