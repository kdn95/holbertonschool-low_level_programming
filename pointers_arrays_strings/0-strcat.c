#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: dest string
 * @src: string to append
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
char *a = dest;
while (*a)
{
a++;
}
while (*src)
{
*a++ = *src++;
}
*a = '\0';
return (dest);
}
