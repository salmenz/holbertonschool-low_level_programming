#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: The nbr of numbers
 * @argv: The numbers
 *
 * Return: 1 if non-digits are passed, 0 otherwise
 */

int main(int argc, char **argv)
{
int count, ch, sum = 0;

if (argc < 2)
printf("0\n");
else
{
for (count = 1; count < argc; count++)
{
for (ch = 0; argv[count][ch] != '\0'; ch++)
if (isdigit(argv[count][ch]) == 0)
{
printf("Error\n");
return (1);
}
sum += atoi(argv[count]);
}
printf("%d\n", sum);
}
return (0);
}
