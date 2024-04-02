#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - add new node to list
 * @head: pointer to head node
 * @str: new str to add
 * Return: address of new element or else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int len = 0;
while (str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;
return (*head);
}
