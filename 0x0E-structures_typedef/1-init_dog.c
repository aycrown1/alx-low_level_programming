#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializing a variable of type struct dog
 *
 * @d: points to a variable ot type struct dog
 * @name: stores the name for the variable
 * @age: stores the age for the variable
 * @owner: stores the owner for the variable
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

