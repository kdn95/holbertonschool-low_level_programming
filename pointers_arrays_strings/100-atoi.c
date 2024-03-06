#include "main.h"
/**
 * _atoi - convert str to int
 * @s: string
 * Return: the int
 */
int _atoi(char *s)
{
int l, i, na, m, nb, num;
l = 0;
i = 0;
na = 0;
m = 0;
nb = 0;
num = 0;
while (s[l] != '\0')
l++;
while (i < l && na == 0)
{
if (s[i] == '-')
++m;
if (s[i] >= '0' && s[i] <= '9')
{
nb = s[i] - '0';
if (m % 2)
nb = -nb;
num = num * 10 + nb;
na = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
na = 0;
}
i++;
}
if (na == 0)
return (0);
return (num);
}
