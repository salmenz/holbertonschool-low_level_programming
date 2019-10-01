#include <stdio.h>
#include "holberton.h"

/**
 * _atoi - Returns the length of a string
 * @s: The string whose length will be returned
 *
 * Return: integer
 */
int _atoi(char *s)
{
int l, p, i, j, sum;
i = 0;
l = 0;
sum = 0;
p = 0;
while (s[l] != '\0')
l++;
while (((s[i] < '0') || (s[i] > '9')) && (s[i] != '\0'))
i++;
if (l == i)
return (0);
else
{
j = i;
while ((j < l) &&(s[j] >= '0') && (s[j] <= '9'))
{
sum = (sum * 10) + (s[j] - 48);
j++;
}
for (j = 0; j <= i; j++)
{
if (s[j] == '-')
p++;
}
if (p % 2 != 0)
sum = sum * (-1);
}
return (sum);
}
