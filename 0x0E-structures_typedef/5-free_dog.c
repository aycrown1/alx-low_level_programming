#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees all struct dog_t variables
 * @d: struct dog_t variable
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
