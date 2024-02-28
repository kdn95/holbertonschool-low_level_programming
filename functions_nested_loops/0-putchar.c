#include<stdio.h>
#include "main.h"
/**
 * main - print _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *c = "_putchar";
while (*c)
{
putchar(*c);
c++;
}
putchar('\n');
return (0);
}
