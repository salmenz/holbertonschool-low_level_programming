#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
return (1);
else
return (0);
}
