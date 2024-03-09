#include "main.h"
#include <stdio.h>
/**
 * _strstr - locate a substring of needle
 * within the haystack string
 * @haystack: the string containing the substring
 * of the needle string
 * @needle: the string to be found within
 * haystack string
 * Return: the output of the needle within haystack
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
i = 0;
while (haystack[i] != '\0')
{
j = 0;
while (needle[j] != '\0')
{
if (haystack[i + j] != needle[j])
break;
j++;
}
if (!needle[j])
return (&haystack[i]);
i++;
}
return (NULL);
}
