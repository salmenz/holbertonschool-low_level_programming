#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Sum of all parametres
 * @n: The number of parametres
 *
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list l;

if (n == 0)
return (0);
else
{
sum = 0;
va_start(l, n);
for (i = 0; i < n; i++)
sum += va_arg(l, int);
va_end(l);
return (sum);
}
}
