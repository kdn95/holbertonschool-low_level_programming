#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - 2D array
 * @width: no of columns
 * @height: no of rows
 * Return: 2D array of ints
 */
int **alloc_grid(int width, int height)
{
int **array;
int i, a, b;
if (width <= 0)
return (NULL);
if (height <= 0)
return (NULL);
array = (int **)malloc(sizeof(*array) * height);
if (array == NULL)
return (NULL);
i = 0;
while (i < height)
{
array[i] = (int *)malloc(sizeof(int) * width);
if (array[i] == NULL)
{
while (i--)
free(array[i]);
free(array);
return (NULL);
}
i++;
}
a = 0;
while (a < height)
{
b = 0;
while (b < width)
{
array[a][b] = 0;
b++;
}
a++;
}
return (array);
}
