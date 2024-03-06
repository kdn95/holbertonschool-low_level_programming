#include "main.h"
/**
 * puts2 - print every other character
 * @str: string
 */
void puts2(char *str)
{
int l6, i6;
l6 = 0;
i6 = 0;
while (str[l6] != '\0')
{
l6++;
}
while(i6 < l6)
{
_putchar(str[l6]);
l6 = l6 + 2;
}
_putchar('\n');
}
