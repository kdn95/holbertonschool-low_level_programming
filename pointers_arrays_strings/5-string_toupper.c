#include "main.h"
/**
 * string_toupper - lowercase of string to upper
 * @s: string
 * Return: string
 */
char *string_toupper(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
i++;
}
s[i] = '\0';
return (s);
}
