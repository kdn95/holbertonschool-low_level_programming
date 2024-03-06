#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of array of ints
 * @a: array
 * @n: number of ints
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d, ", a[i]);
}
printf("\n");
}
