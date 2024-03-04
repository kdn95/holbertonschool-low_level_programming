#include "main.h"
/**
 * more_numbers - print numbers 0-14 10 times
 */
void more_numbers(void)
{
int a, b;
a = 0;
while (a < 10)
{
b = 0;
while (b <= 14)
{
if (b > 9)
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
b++;
}
_putchar('\n');
a++;
}
}
