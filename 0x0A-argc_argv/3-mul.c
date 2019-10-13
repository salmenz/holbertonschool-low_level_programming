#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies 2 nbr
*@argc: nbr argument
*@argv: string of pointers
*Return: 0 (success)
*/
int main(int argc, char *argv[])
{
int mul, n1, n2;

if (argc != 3)
printf("Error\n");
else
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
mul = n1 *n2;
printf("%d\n", mul);
}
return (0);
}
