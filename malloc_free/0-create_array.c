#include "main.h"
#include <stdio.h>
/**
 * create_array - initialize array of
 * chars and initialize with spec. char
 * @size: size of array of char
 * @c: the char
 * Return: input of first char
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;
if (size <= 0)
return (0);
array = malloc(size);
if (ar == 0)
return (0);
i = 0;
while (i < size)
{
array[i] = c;
i++;
}
return (array);
}


