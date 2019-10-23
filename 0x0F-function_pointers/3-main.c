#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Do mathematical calculations with arguments passed to program
 * @argc: The number of arguments passed to the program
 * @argv: The pointer to the array of arguments passed to the program
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int num1 = 0, num2 = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(num1, num2));
	return (0);
}
