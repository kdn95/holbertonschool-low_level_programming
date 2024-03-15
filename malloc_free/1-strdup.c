#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer
 * to newly allocated mem containing
 * copy of given string
 * @str: the string input
 * Return: the pointer or if NULL
 * return NULL
 */
char *_strdup(char *str)
{
char *s;
int length;
if (str == 0)
return (0);
length = 0;
while (str[length])
length++;
s = malloc(sizeof(char) * (length + 1));
if (s == 0)
return (0);
s[length] = '\0';
while (length--)
{
s[length] = str[length];
}
return (s);
}
