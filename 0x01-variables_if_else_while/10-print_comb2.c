#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int y, z;

	while (y <= 9)
	{
		putchar('0' + y);
		putchar('0' + z);
		if (y == 9 && z == 9)
			break;
		putchar(',');
		putchar(' ');
		z++;
		if (z > 9)
		{
			y++;
			z = 0;
		}
	}
	putchar('\n');
	return (0);
}
