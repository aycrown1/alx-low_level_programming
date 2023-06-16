#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 *		a dlistint_t linked list.
 * @head: The head of the list.
 * @index: The index of the node.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head,
		unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}

	dlistint_t *current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return (1);
}

