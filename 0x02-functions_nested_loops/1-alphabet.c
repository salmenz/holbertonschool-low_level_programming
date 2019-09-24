#include "holberton.h"
/**
 * print_alphabet - function to print the alphabet
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
}
