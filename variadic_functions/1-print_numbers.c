#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers and new line
 * @separator: string to be printed between numbers
 * @n: no of ints through funct
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list nums;
i = 0;
va_start(nums, n);
while (i < n)
{
printf("%d", va_arg(nums, unsigned int));
if (separator != NULL && i != n - 1)
printf("%s", separator);
i++;
}
printf("\n");
va_end(nums);
}
