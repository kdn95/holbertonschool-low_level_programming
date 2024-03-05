#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
int l = 0;
int a, b;
while (str[l] != '\0')
{
l++;
}
a = l;
if (a % 2 == 0)
{
b = a / 2;
}
else
{
b = ((a - 1) / 2);
}
while (str[b] != '\0')
{
_putchar(str[b]);
b++;
}
_putchar('\n');
}
