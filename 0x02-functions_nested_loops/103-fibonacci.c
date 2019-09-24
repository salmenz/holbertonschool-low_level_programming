#include <stdio.h>

/**
 * main - Sum even Fibonacci numbers under 4,000,000
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int num1 = 2, num2 = 3, sum = 2, temp = 0;

	while (temp < 4000000)
	{
		temp = num1 + num2;
		if (temp % 2 == 0)
			sum = sum + temp;
		num1 = num2;
		num2 = temp;
	}
	printf("%lu\n", sum);
	return (0);
}
