#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 *		at a given position in a dlistint_t linked list.
 * @head: The head of the list.
 * @idx: The desired index.
 * @n: The member of the new node.
 * Return: Return the address of the new node, or NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (idx == 0)
	{
		return (add_dnodeint(head, n));
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	if (current->next == NULL)
	{
		return (add_dnodeint_end(head, n));
	}

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}

