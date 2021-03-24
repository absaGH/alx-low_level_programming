#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * printed - checks whether a node is printed or not in an array of pointers
 * to the nodes printed out in a linked list
 * @curr: the node to be checked
 * @c: size of the new list (always one more than the old list)
 * @list: pointer to pointer to store printed nodes in the linked list
 *
 * Return: pointer to the new list
 */
int printed(listint_t *curr, listint_t **list, size_t c)
{
int i;
for (i = 0; i < c; i++)
if (list[i] == curr)
return (1);
list[i] = curr;
return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
listint_t *temp, **list;

list = NULL;
size_t count = 0;
if (head == NULL)
exit(98);
else
{
temp = head;
while (temp)
{
if (printed(temp, list, count))
{
printf("-> [%p] %d\n", (void *)temp, temp->n);
temp = NULL;
}
else
{
printf("[%p] %d\n", (void *)temp, temp->n);
temp = temp->next;
count++;
}
}
free(list);
}
return (count);
}
