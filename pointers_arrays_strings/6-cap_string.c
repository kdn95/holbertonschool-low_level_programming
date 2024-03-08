#include "main.h"
/**
 * cap_string - capitalize string
 * @str: string
 * Return: new string
 */
char *cap_string(char *s)
{
int i, j;
char x[13] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};
i = 0;
j = 0;
while (s[i] != '\0')
{
if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
while (j < 13)
{
if (s[i] == x[j])
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = s[i + 1] - 32;
}
}
j++; 
}
}
i++;
return (s);
}
