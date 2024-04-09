#include "main.h"
#include <stdio.h>
/**
 * flip_bits - how many flips needed for n to be m
 * @n: first int
 * @m: second int
 * Return: count of flips required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor, count;
xor = n ^ m;
count = 0;
while (xor != 0)
{
count += xor & 1;
xor >>= 1;
}
return (count);
}
