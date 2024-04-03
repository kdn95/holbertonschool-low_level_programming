#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_dnodeint_at_index - Nth node of list
 * @head: pointer to head node
 * @index: Nth value
 * Return: Nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *n_node = head;
unsigned int count = 0;
while (n_node != NULL)
{
if (count == index)
return (n_node);
count++;
n_node = n_node->next;
}
return (NULL);
}
