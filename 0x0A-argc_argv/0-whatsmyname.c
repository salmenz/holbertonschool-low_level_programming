#include <stdio.h>

/**
 * main - Prints the program's name followed by a new line
 * @argc: The number of arguments supplied to the program
 * @argv: The program name
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
if (argc == 1)
printf("%s\n", argv[0]);
else
{
argv[0] = argv[4];
printf("%s\n", argv[0]);
}
return (0);
}
