#include<stdio.h>
/**
 * main - print all numbers of base 16 lwrcase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int p = 0;
char hex[] = "0123456789abcdef";
while (p < 16)
{
putchar(hex[p]);
p++; 
}
putchar('\n');
return (0);
}
