#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - alloc mem using malloc
 * @b: integer
 * Return: pointer to alloc memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
free(ptr);
exit(98);
}
return (ptr);
}
