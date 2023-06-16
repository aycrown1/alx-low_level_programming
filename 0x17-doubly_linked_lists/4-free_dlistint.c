#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: The head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

