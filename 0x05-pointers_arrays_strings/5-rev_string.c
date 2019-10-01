#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - Prints a string followed by a new line to stdout
 * @s: The string to be printed
 */

void rev_string(char *s)
{
int length, c;
char *begin, *end, temp;

length = _strlen(s);
begin = s;
end = s;
for (c = 0; c < length - 1; c++)
end++;
for (c = 0; c < length / 2; c++)
{
temp = *end;
*end = *begin;
*begin = temp;
begin++;
end--;
}
}
