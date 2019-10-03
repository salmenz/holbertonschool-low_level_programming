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

j = 0;
while (s1[j] != '\0')
j++;
i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] > s2[i])
{
return (15);
break;
}
else if (s1[0] < s2[0])
{
return (-15);
break;
}
else
i++;
}
}
if (i == j)
return (0);
}

