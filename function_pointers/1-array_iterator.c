#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - function that exe a
 * function given as para on each elem of array
 * @array: input data into array
 * @size: size of array
 * @action: pointer to function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (!array || !size || !action)
return;
while (size--)
action(*array++);
}
