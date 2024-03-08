#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates character in string
 * @s: string
 * @c: the character
 * Return: pointer to 1st occurrence
 * of char c or NULL if not found
 */
char *_strchr(char *s, char c)
{
int i;
i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
return ((s + i));
i++;
}
if (c == '\0')
return ((s + i));
return (NULL);
}
