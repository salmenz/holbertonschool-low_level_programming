#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Print
 * @format: A list of types
 */
void print_all(const char * const format, ...)
{
va_list l;
int i = 0;
char *s;

va_start(l, format);
while (format == NULL)
{
printf("\n");
return;
}
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%c", (char) va_arg(l, int));
break;
case 'i':
printf("%d", va_arg(l, int));
break;
case 'f':
printf("%f", (float) va_arg(l, double));
break;
case 's':
s = va_arg(l, char *);
if (s != NULL)
{
printf("%s", s);
break;
}
printf("(nil)");
break;
}
if ((format[i] == 'c' || format[i] == 's' || format[i] == 'i'
|| format[i] == 'f') && (format[i + 1] != '\0'))
printf(", ");
i++;
}
va_end(l);
printf("\n");
}

