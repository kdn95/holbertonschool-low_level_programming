#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _zero - all bytes to 0
 * @des: pointer
 * @size: amt mem each byte
 * Return: pointer to mem area des
 */
void *_zero(void *des, unsigned int size)
{
char *d = des;
do
* d++ = 0;
while (--size != 0);
return (d);
}
/**
 * _calloc - array using calloc
 * @nmemb: no elements
 * @size: size of array
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (!nmemb || !size)
return (NULL);
ptr = malloc(nmemb * size);
if (!ptr)
return (NULL);
_zero(ptr, nmemb * size);
return (ptr);
}
