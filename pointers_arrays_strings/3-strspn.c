#include "main.h"
/**
 * _strspn - finds length of s made up of
 * all bytes from accept
 * @s:main string
 * @accept: string with all char to match s
 * Return: no of bytes from accept within s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count;
i = 0;
count = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
count++;
i++;
j = 0;
}
else
{
j++;
}
}
if (accept[j] == '\0')
{
break;
}
}
return (count);
}
