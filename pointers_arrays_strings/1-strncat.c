#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: dest string
 * @src: string
 * @n: num of bytes
 * Return: to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a, b = 0;
while(dest[a] != '\0')
{
a++;
}
while (b < n && src[b] != '\0')
{
dest[a + b] = src[b];
b++;
}
dest[a + b] = '\0';
return (dest);
}
