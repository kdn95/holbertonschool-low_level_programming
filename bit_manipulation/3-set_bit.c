#include "main.h"
#include <stdio.h>
/**
 * set_bit - set value of bit to 1 at given ind
 * @n: pointer to UL
 * @index: given ind
 * Return: 1 for success and -1 for fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x = 1UL << index;
if (n == NULL)
{
return (-1);
}
(*n) |= x;
return (1);
}
