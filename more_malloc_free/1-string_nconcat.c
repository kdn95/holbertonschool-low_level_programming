#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concat 2 str
 * @s1: first str
 * @s2: second str
 * @n: int length
 * Return: pointer to newly alloc'd
 * space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int l1, l2, i;
l1 = 0;
l2 = 0;
if (s1 != NULL)
while (s1[l1])
l1++;
if (s2 != NULL)
while (s2[l2])
l2++;
if (!(n >= l2))
l2 = n;
str = malloc(sizeof(char) * (l1 + l2 + 1));
if (!str)
return (NULL);
i = 0;
while (i < (l1 + l2))
{
if (i < l1)
str[i] = s1[i];
else
str[i] = s2[i - l1];
i++;
}
str[i] = '\0';
return (str);
}
