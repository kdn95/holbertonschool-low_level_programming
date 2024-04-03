#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint_end - add new node at end
 * @head: head node
 * @n: int value
 * Return: new head node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *back_node;
dlistint_t *tail = *head;
back_node = malloc(sizeof(dlistint_t));
if (!back_node)
{
return (NULL);
}
back_node->n = n;
back_node->next = NULL;
if ((*head) == NULL)
{
back_node->prev = NULL;
(*head) = back_node;
return (back_node);
}
while (tail->next != NULL)
{
tail = tail->next;
}
back_node->prev = tail;
tail->next = back_node;
return (back_node);
}
