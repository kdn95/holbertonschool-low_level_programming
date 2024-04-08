#include "main.h"
/**
 * binary_to_uint - bin num to unsigned int
 * @b: char pointer of binary num as char
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int val;
if (*b == '\0')
{
return (0);
}
val = 0;
while (*b != '\0')
{
if (*b == '1')
{
val = (val << 1) | 1;
}
else if (*b == '0')
{
val <<= 1;
}
else
{
return (0);
}
b++;
}
return (val);
}
