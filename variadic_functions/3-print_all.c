#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function to print anything
 * @format: contains various data types to be printed out
 *
 */
void print_all(const char * const format, ...)
{
int i;
char *str, *sep;
va_list f_spef;
sep = " ";
i = 0;
va_start(f_spef, format);
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%c%s", va_arg(f_spef, int), sep);
break;
case 'i':
printf("%d%s", va_arg(f_spef, int), sep);
break;
case 'f':
printf("%f%s", va_arg(f_spef, double), sep);
break;
case 's':
str = va_arg(f_spef, char*);
if (!str)
str = "(nil)";
printf("%s%s", str, sep);
break;
default:
break;
}
sep = ", ";
i++;
}
printf("\n");
va_end(f_spef);
}
