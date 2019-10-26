#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Sum of all arguments
 * @n: The number of arguments
 *
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list l;
unsigned int i, sum = 0;

va_start(ap, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
sum += va_arg(l, int);
va_end(l);
return (sum);
}
