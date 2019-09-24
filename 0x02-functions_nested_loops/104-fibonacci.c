#include <stdio.h>
/**
* main - print the first 100 fibonacci numbers
*Return: 0 (success)
*/
int main(void)
{
	long i, j, c, sum, sum_ac, sum_bd;
	long sa, sb, sc, sd;

	i = 0;
	j = 1;
	for (c = 0; c < 91; c++)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%ld, ", sum);
	}
	sa = i / 10000000000;
	sb = i % 10000000000;
	sc = j / 10000000000;
	sd = j % 10000000000;
	for ( ; c < 98; c++)
	{
		sum_ac = sa + sc;
		sum_bd = sb + sd;
		if (sum_bd > 10000000000)
		{
			sum_bd %= 10000000000;
			sum_ac++;
		}
		if (c != 97)
		{
			printf("%ld%ld, ", sum_ac, sum_bd);
			sa = sc;
			sb = sd;
			sc = sum_ac;
			sd = sum_bd;
		}
		else
			printf("%ld%ld\n", sum_ac, sum_bd);
	}
	return (0);
}
