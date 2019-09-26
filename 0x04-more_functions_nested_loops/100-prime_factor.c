#include <stdio.h>
#include <math.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
long int n, i, max;

n = 612852475143;

while (n % 2 == 0)
{
max = 2;
n = n / 2;
}
for (i = 3 ; i <= sqrt(n) ; i = i + 2)
{
while (n % i == 0)
{
max = i;
n = n / i;
}
}
if (n > 2)
{
max = n;
}
printf("%li", max);
printf("\n");
return (0);
}
