#include "dog.h"
#include<stdlib.h>

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

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(ptr);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(ptr);
		free(name);
		return (NULL);
	}
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}


