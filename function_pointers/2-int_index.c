#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - return ind of 1st elem
 * if cmp doesn't return 0
 * @array: contain all elems
 * @size: no of elems
 * @cmp: pointer to function to compare
 * values
 * Return: -1 if no match or non-zero int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
if (!array || !size)
return (0);
i = size;
while (size--)
if (cmp(array[i - size]))
return (i - size);
return (-1);
}
