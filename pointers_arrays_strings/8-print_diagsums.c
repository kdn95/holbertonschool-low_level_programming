#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of two
 * diagonals of sq matrix of ints
 * @a: matrix where sum of diagonals are printed
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
int i;
int dsum, dsum1;
dsum = 0;
dsum1 = 0;
while (i < size)
{
dsum = dsum + a[(size * i) + i];
dsum1 = dsum1 + a[(size * (i + 1)) - (i + 1)];
i++;
}
printf("%d, %d\n", dsum, dsum1);
}
