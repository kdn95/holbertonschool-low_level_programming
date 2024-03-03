#include "main.h"
/**
 * print_last_digit - print last digit of int
 * @i: the integer
 * Return: value of last digit
 */
int print_last_digit(int i)
{
int a;
if (i < 0)
i = -i;
a = i % 10;
if (a < 0)
a = -a;
_putchar('0' + a);
return (a);
}
