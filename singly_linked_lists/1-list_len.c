#include "lists.h"
#include <stdlib.h>
/**
 * list_len - count no of elements
 * @h: pointer to list_t
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
