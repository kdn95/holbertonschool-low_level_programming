#include "main.h"
/**
 * _puts - print string with newline
 * @str: string
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
