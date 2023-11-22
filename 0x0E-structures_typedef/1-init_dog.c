#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initials of a dog
 * struct dog - A structure of a dog
 * @d: the name of the construction
 * @name: name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
