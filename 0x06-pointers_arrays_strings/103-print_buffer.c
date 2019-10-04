#include "holberton.h"
#include <stdio.h>

/**
* print_buffer - prints a buffer
* @b: buffer.
* @size: size of buffer.
*
*/
void print_buffer(char *b, int size)
{
int i, j, k;

if (size <= 0)
printf("\n");
else
{
for (j = 0; j < size; j += 10)
{
printf("%.8x:", j);
for (k = j; k < j + 10; k++)
{
if (k % 2 == 0)
printf(" ");
if (k < size)
printf("%.2x", *(b + k));
else
printf("  ");
}
printf(" ");
for (i = j; i < j + 10; i++)
{
if (i >= size)
break;
if (*(b + i) < 32 || *(b + i) > 126)
printf("%c", '.');
else
printf("%c", *(b + i));
}
printf("\n");
}
}
}
