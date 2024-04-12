#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - add new node at start
 * @head: head node
 * @n: int value
 * Return: new head node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
{
return (NULL);
}
new_node->n = n;
new_node->next = (*head);
new_node->prev = NULL;
if ((*head) != NULL)
{
(*head)->prev = new_node;
}
(*head) = new_node;
return (*head);
free(*head);
}
