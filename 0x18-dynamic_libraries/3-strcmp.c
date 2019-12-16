#include <stdio.h>

/**
 * _strcmp - Returns the length of a string
 * @s1: The string whose length will be returned
 * @s2 : String
 * Return: The length of the string
 */
int _strcmp(char *s1, char *s2)
{
int i, j;

i = 0;
while (s1[i] != '\0')
i++;
j = 0;
while (s2[j] != '\0')
j++;
for (i = 0; i < j; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
return (0);
}

