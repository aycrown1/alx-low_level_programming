#ifndef DOG_H
#define DOG_H

/**
 * struct dog - collective data of pet "Dog"
 *
 * @name: pet name
 * @age: pet age
 * @owner: pet owner's name
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - defining  a new name for struct dog
 *
 */

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

