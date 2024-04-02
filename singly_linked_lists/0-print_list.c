#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - print all elements in list
 * @h: pointer to list_t
 * Return: count
 */
size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t count = 0;
while (current != NULL)
{
printf("%s (%d) -> ", current->str, current->len);
current = current->next;
count++;
}
printf("NULL\n");
return (count);
}
