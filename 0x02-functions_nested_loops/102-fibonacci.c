#include <stdio.h>

/**
 * main - Print the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int num1 = 1, num2 = 2, next;
	int count;

	for (count = 1; count <= 50; count++)
	{
		if (count <= 2)
			next = count;
		else
		{
			next = num1 + num2;
			num1 = num2;
			num2 = next;
		}
		printf("%lu", next);
		if (count < 50)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
