#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point in c
 *
 * Return: 0 if successful
 */
int main(void)
{
char c = 0;
int i = 0;
char j = 0;
srand(time(0));
while (i <= 2645)
{
c = rand() % 128;
i += c;
putchar(c);
}
j = 2772 - i;
putchar(j);
return (0);
}
