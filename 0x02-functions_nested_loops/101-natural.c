#include <stdio.h>

/**
 * main - Print sum of all multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int num, sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
