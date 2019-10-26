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
int sum = 0;
va_list l;

va_start(l, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
sum += va_arg(l, int);
va_end(l);
return (sum);
}
