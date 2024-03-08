#include "main.h"
/**
 * cap_string - capitalize string
 * @s: string
 * Return: new string
 */
char *cap_string(char *s)
{
int i, j;
char x[13] = {
' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'
};
i = 0;
while (s[i] != '\0')
{
if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
j = 0;
while (j < 13)
{
if (s[i] == x[j])
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
s[i + 1] = s[i + 1] - 32;
break;
}
j++;
}
i++;
}
return (s);
}
