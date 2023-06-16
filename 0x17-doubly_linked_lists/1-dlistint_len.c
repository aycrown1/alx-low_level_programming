#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 *		a double linked list
 * @h: Pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	if (current == NULL)
		return (count);
	while (current->prev != NULL)
	{
		current = current->prev;
	}
	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}

