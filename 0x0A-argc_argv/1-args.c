#include <stdio.h>
/**
* main - print the arguments received
*@argc: nbr arguments
*@argv: string of arguments
*Return: 0 (success)
*/
int main(int argc, __attribute__((unused)) char **argv)
{
argc -= 1;
printf("%d\n", argc);
return (0);
}
