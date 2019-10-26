#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - Print all numbers of the func
 * @n: The number of arguments
 * @separator: separator
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list l;

va_start(l, n);
for (i = 0; i < n; i++)
{
if (n - 1 == i)
printf("%d", va_arg(l, int));
else
{
if (separator != NULL)
printf("%d%s", va_arg(l, int), separator);
else
printf("%d", va_arg(l, int));
}
}
va_end(l);
printf("\n");
}
