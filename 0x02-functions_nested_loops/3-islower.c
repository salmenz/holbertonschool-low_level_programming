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
if (65 <= c && c <= 90)
return (0);
else
return (1);
}
