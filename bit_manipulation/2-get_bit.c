#include "main.h"
#include <stdio.h>
/**
 * get_bit - get bit at given ind
 * @n: the number
 * @index: at the given index
 * Return: bit value of num at given ind
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int keep;
if (index > 64)
return (-1);
keep = n >> index;
return (keep & 1);
}
