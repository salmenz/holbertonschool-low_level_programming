#include <stdio.h>

/**
 * main - Prints the program's name followed by a new line
 * @argc: The number of arguments supplied to the program
 * @argv: The program name
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
while (argc--)
printf("%s\n", argv[0]);
return (0);
}
