#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dlistint - free up node
 * @head: pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
