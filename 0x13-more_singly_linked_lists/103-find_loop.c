#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a given linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: NULL if there is no loop
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp, *temp2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	temp = head->next;
	temp2 = (head->next)->next;

	while (temp2)
	{
		if (temp == temp2)
		{
			temp = head;

			while (temp != temp2)
			{
				temp = temp->next;
				temp2 = temp2->next;
			}

			return (temp);
		}

		temp = temp->next;
		temp2 = (temp2->next)->next;
	}

	return (NULL);
}
