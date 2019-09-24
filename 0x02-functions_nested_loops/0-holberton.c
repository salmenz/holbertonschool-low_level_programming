#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char hbtn[] = "Holberton";
	int digit = 0;

	while (digit < 9)
	{
		_putchar(hbtn[digit]);
		digit++;
	}
	_putchar ('\n');
return (0);
}
