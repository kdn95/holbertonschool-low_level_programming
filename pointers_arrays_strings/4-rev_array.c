#include "main.h"
/**
 * reverse_array - reverse array of ints
 * @a: array
 * @n: no of elements in array
 */
void reverse_array(int *a, int n)
{
int i, b, z;
b = n - 1;
i = 0;
while (i < n / 2)
{
z = a[i];
a[i] = a[b];
a[b--] = z;
i++;
}
}
