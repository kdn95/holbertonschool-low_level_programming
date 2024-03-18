#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first str
 * @s2: second str
 * Return: newly allocated memory containing
 * s1 and s2 and null term
 */
char *str_concat(char *s1, char *s2)
{
int len1, len2, i;
char *str;
len1 = 0;
len2 = 0;
if (s1 != NULL)
while (s1[len1])
len1++;
if (s2 != NULL)
while (s2[len2])
len2++;
str = malloc(sizeof(char) * (len1 + len2 + 1));
if (str == NULL)
return (NULL);
i = 0;
while (i < (len1 + len2))
{
if (i < len1)
str[i] = s1[i];
else
str[i] = s2[i - len1];
i++;
}
str[i] = '\0';
return (str);
}
