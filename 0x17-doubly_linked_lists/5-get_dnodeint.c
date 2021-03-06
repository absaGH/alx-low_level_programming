#include "lists.h"

/**
 * get_dnodeint_at_index - returns the content (data)of nth node
 * @head: head of node
 * @index: index of node to be searched (it starts at 0)
 * Return: a pointer to nth node or NULL if it donesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
