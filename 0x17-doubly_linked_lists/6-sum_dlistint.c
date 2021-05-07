#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a node
 * @head: head of node
 * Return: sum of data in each node in the list
 */
int sum_dlistint(dlistint_t *head)
{
	size_t res = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
