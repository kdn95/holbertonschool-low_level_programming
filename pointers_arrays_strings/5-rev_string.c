#include "main.h"
/**
 * rev_string - reverse string
 * @s: string
 */
void rev_string(char *s)
{
int l = 0;
int a, z;
char c;
while (s[l] != '\0')
l++;
a = 0;
z = l - 1;
while (a < z)
{
c = s[a];
s[a] = s[z];
s[z] = c;
a++;
z--;
}
}
