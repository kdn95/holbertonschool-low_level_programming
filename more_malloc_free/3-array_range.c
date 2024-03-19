#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create array
 * @min: start int
 * @max: end int
 * Return: pointer to mem allocated
 */
int *array_range(int min, int max)
{
int *array;
int a;
if (min > max)
return (NULL);
a = max - min;
array = malloc(sizeof(int) * (a + 1));
if (!array)
return (NULL);
while (max > min)
{
array[a] = max;
a--;
max--;
}
array[a] = min;
return (array);
}
