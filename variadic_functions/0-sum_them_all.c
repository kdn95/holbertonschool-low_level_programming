#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns sum of all param
 * @n: no of parameters
 * Return: total sum of all params or 0
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum_of;
va_list start_sumz;
sum_of = 0;
if (n == 0)
{
return (0);
}
va_start(start_sumz, n);
i = 0;
while (i < n)
{
sum_of += va_arg(start_sumz, unsigned int);
i++;
}
va_end(start_sumz);
return (sum_of);
}
