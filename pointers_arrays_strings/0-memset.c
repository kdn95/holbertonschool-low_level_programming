#include "main.h"
/**
 * _memset - fills memory with a cons char
 * @b: the character or byte
 * @n: no of bytes or char
 * @s: pointer to memory
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
