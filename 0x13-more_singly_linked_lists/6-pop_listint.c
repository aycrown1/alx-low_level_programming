#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list, and returns
 *               the head node’s data (n).
 * @head: Pointer to a pointer to the first node of the list.
 *
 * Return: The value of the n element of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}

