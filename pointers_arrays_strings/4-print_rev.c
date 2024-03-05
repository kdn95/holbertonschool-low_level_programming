#include "main.h"
/**
 * print_rev - print str reverse
 * @s: string
 */
void print_rev(char *s)
{
int l = 0;
int i;
while (s[l] != '\0')
l++;
i = l - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
