#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string whose length will be returned
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
