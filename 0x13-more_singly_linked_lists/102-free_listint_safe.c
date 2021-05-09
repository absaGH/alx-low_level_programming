#include "lists.h"

/**
 * looped_list_len - Counts the number of nodes in a given
 *                      linked list.
 * @head: A pointer to the begining of the list to be checked.
 *
 * Return: 0 if there is no loop in the list.
 *         Otherwise - the number of nodes in the list.
 */
size_t looped_list_len(listint_t *head)
{
	listint_t *temp, *temp2;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	temp = head->next;
	temp2 = (head->next)->next;

	while (temp2)
	{
		if (temp == temp2)
		{
			temp = head;
			while (temp != temp2)
			{
				count++;
				temp = temp->next;
				temp2 = temp2->next;
			}

			temp = temp->next;
			while (temp != temp2)
			{
				count++;
				temp = temp->next;
			}

			return (count);
		}

		temp = temp->next;
		temp2 = (temp2->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a linked list safely including lists
 *                     containing loops and sets the head to NULL.
 * @h: A pointer to the begining of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t count, index;

	count = looped_list_len(*h);

	if (count == 0)
	{
		for (; h != NULL && *h != NULL; count++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (count);
}
