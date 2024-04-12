#include "lists.h"
/**
 * insert_dnodeint_at_index - add node at index
 * @h: head node
 * @idx: index
 * @n: int value
 * Return: new node from index and n value
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new;
dlistint_t *spot;
dlistint_t *prev = NULL;
unsigned int i = 0;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
free(new);
free_dlistint(*h);
exit(98);
}
new->n = n;
spot = *h;
while (spot != NULL && i < idx)
{
prev = spot;
spot = spot->next;
i = i + 1;
}
if (i != idx)
return (NULL);
if (spot == NULL)
{
if (i == 0)
{
*h = new;
new->prev = NULL;
new->next = NULL;
}
else
{
prev->next = new;
new->prev = prev;
new->next = NULL;
}
}
else
{
if (i == 0)
{
spot->prev = new;
new->next = spot;
new->prev = NULL;
*h = new;
}
else
{
spot->prev->next = new;
new->prev = spot->prev;
spot->prev = new;
new->next = spot;
}
}
return (new);
}
