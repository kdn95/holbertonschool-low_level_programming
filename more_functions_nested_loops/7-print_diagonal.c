#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: no# times to print diagonal
 */
void print_diagonal(int n)
{
int i = 0;
if (n <= 0)
{
_putchar('\n');
return;
}
while (i < n)
{
int j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
i++;
}
_putchar('\n');
}
