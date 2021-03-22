#include <stdlib.h>
#include "lists.h"

/**
 * free_listint -  frees the memory space occupied by listint_t list.
 * @head: pointer to the beginning of the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
listint_t *next;

while (head != NULL)
{
next = head->next;
free(head);
head = next;
}
}
