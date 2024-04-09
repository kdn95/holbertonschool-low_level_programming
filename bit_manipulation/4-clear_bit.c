#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets value of given bit to 0
 * @n: given value
 * @index: given index
 * Return: 1 if success or -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int y = 1 << index;
if (n == NULL || index > 64)
{
return (-1);
}
if ((*n >> index) & 1)
{
*n -= y;
return (1);
}
return (1);
}
