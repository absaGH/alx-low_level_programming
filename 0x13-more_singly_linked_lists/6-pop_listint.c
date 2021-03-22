#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to pointer to the beginning of the list
 *
 * Return: the head node's data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (head == NULL || *head == NULL)
return (0);
temp = *head;
*head = temp->next;
n = temp->n;
free(temp);
return (n);
}
