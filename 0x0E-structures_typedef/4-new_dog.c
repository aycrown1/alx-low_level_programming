#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog.
 *
 * @name: name for the new struct dog variable
 * @age: age of the new struct dog variable
 * @owner: owner for the new struct dog variable
 *
 * Return: Return NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{


	dog_t *ptr;
	int lname, lowner;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	lname = strlen(name);
	lowner = strlen(owner);

	ptr->name = malloc(sizeof(char) * (lname + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = strcpy(ptr->name, name);

	ptr->age = age;

	ptr->owner = malloc(sizeof(char) * (lowner + 1));

	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	ptr->owner = strcpy(ptr->owner, owner);

	return (ptr);
}


