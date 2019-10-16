#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *argstostr - arguments of the program
*@ac: counter
*@av: vector
*Return: shting with new ligne
*/
char *argstostr(int ac, char **av)
{
int i, j, k;
char *str, *b;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
k++;
k++;
}
k++;
str = malloc(k *sizeof(char));
b = str;
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
*str = av[i][j];
str++;
}
*str = '\n';
str++;
}
return (b);
}
