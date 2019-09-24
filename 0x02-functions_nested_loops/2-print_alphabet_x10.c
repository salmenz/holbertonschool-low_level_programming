#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int digit;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
	c = 'a';
	digit = 0;
		while (digit < 26)
		{
		_putchar(c);
		digit++;
		c++;
		}
	_putchar ('\n');
}
}
