#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - add new node at end of list
 * @head: head node
 * @str: string to be added
 * Return: head node with new node at end
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_end;
list_t *last = *head;
int counter = 0;
while (str[counter])
counter++;
new_end = malloc(sizeof(list_t));
if (new_end == NULL)
{
return (NULL);
}
new_end->str = strdup(str);
new_end->len = counter;
new_end->next = NULL;
if (*head == NULL)
{
*head = new_end;
return (new_end);
}
while (last->next != NULL)
last = last->next;
last->next = new_end;
return (new_end);
}
