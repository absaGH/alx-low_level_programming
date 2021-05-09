#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * looped_list_len - Calculates the number of nodes in a list which contatins
 *                   loop.
 * @head: A pointer to the head of the list to be checked.
 *
 * Return: 0 if the list contains no loop
 *         Otherwise - the number of nodes in the list.
 */
size_t looped_list_len(const listint_t *head)
{
	const listint_t *temp, *temp2;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	temp = head->next;
	temp2 = (head->next)->next;

	while (temp2)
	{
		if (temp == temp2)
		{
			temp = temp2;
			while (temp != temp2)
			{
				count++;
				tem = temp->next;
				temp = temp2->next;
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
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the begining of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, index = 0;

	count = looped_list_len(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}
