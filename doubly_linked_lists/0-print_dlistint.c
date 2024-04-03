#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - print all elements
 * @h: pointer to dlistint_t
 * Return: return count
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
