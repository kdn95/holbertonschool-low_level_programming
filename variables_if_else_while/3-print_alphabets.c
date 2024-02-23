#include<stdio.h>
/**
 * main - alphabet in lwrcase then in upprcase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lwr_case = 'a';
char uppr_case = 'A';
while (lwr_case <= 'z')
{
putchar(lwr_case);
lwr_case++;
}
while (uppr_case <= 'Z')
{
putchar(uppr_case);
uppr_case++;
}
putchar('\n');
return (0);
}
