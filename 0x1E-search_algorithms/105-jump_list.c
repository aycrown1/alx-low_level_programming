#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list of integers
 *             using jump search.
 * @list: A pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (node = jump = list; jump && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->next && jump->index < step; jump = jump->next)
			printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
		if (jump->index >= size)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		   node->index, jump->index);

	for (; node && node->index <= jump->index; node = node->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
	}
	return (NULL);
}
