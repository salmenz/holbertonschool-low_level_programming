#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
