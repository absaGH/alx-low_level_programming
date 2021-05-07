#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given position
 * @h: head of node
 * @idx: index where a new node is going to be inserted
 * @n: data for new node
 * Return: list with inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new = NULL;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (idx != 1)
	{
		idx--;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	return (new);
}
