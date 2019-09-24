#include "holberton.h"
/**
 * print_alphabet - Print the alphabet
 *
 * Return: None
 *
 */
void print_alphabet(void)
{
	char c = 'a';
        int digit = 0;

        while (digit < 26)
        {
                _putchar(c);
                digit++;
		c++;
        }
        _putchar ('\n');
}
