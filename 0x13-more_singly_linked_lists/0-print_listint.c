#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  displays all the elements of a listint_t list.
 * @h: list to be displayed
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

if (!h)
return (0);
while (h)
{
nodes += 1;
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}
