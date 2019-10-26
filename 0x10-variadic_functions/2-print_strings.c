#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - Print all numbers of the func
 * @n: The number of arguments
 * @separator: separator
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list l;
char *str;
unsigned int i;

va_start(l, n);
for (i = 0; i < n; i++)
{
str = va_arg(l, char*);
if (str == NULL)
str = "(nil)";
printf("%s", str);
if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
va_end(l);
printf("\n");
}
