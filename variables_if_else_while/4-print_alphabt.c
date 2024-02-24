#include<stdio.h>
/**
 * main - print alphabet without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char q_e = 'a';
while (q_e <= 'z')
{
if (q_e != 'q' && q_e != 'e')
{
putchar(q_e);
}
q_e++;
}
putchar('\n');
return (0);
}
