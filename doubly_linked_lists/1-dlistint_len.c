#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * dlistint_len - count no of elems
 * @h: pointer to linked list
 * Return: no of elems
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
