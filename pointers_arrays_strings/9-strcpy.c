#include "main.h"
/**
 * _strcpy - copies str pointed to by src
 * to buffer pointed to by dest
 * @dest: pointer to this
 * @src: string
 * Return: the dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*src != '\0')
{
dest[i] = *src;
i++;
src++;
}
dest[i] = '\0';
return (dest);
}
