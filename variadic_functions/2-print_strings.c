#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print strings with new line
 * @separator: separator char
 * @n: no of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list stringz;
va_start(stringz, n);
i = 0;
while (i < n)
{
str = va_arg(stringz, char *);
if (separator != NULL && i != 0)
{
printf("%s", separator);
}
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
i++;
}
printf("\n");
va_end(stringz);
}
