#include "main.h"
/**
 *  _print_rev_recursion - print str reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
int i, j;
i = 0;
while (s[i] != '\0')
i++;
j = i - 1;
while (j >= 0)
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}
