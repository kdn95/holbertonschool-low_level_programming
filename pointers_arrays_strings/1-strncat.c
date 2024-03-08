#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: the string
 * @n: the number of bytes
 * Return: the dest string
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int len = 0;
while (dest[len] != '\0')
len++;
while (i < n && src[i] != '\0')
{
dest[len + i] = src[i];
i++;
}
dest[len + i] = '\0';
return (dest);
}
