#include "lists.h"
#include <stdio.h>

/**
 * print_list - display the content of all nodes of the list_t list
 * @h: pointer to the the first node of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
const list_t *tmp;
unsigned int i;

tmp = h;
for (i = 0; tmp; i++)
{
printf("[%lu] %s\n", tmp->len, tmp->str);
tmp = tmp->next;
}
return (i);
}
