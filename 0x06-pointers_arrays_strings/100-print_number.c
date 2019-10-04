
#include "holberton.h"

/**
 * print_number - Prints int
 * @n: int
 */
void print_number(int n)
{
int i = n;

if (n < 0)
{
_putchar('-');
i = -i;
}
if ((i / 10) > 0)
print_number(i / 10);
_putchar((i % 10) + '0');
}
