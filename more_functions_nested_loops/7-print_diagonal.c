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
while (j < n)
{
if (j == i)
_putchar('\\');
else if (j < i)
_putchar(' ');
j++;
}
_putchar('\n');
i++;
}
}

