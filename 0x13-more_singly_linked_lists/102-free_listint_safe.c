#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list and sets head to NULL.
 * @h: pointer to a pointer to the head node of the list
 *
 * Return: size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current, *temp;

    if (h == NULL || *h == NULL)
        return (count);

    current = *h;
    while (current != NULL)
    {
        count++;
        if (current <= current->next)
        {
            free(current);
            *h = NULL;
            break;
        }
        temp = current;
        current = current->next;
        free(temp);
    }

    return (count);
}

