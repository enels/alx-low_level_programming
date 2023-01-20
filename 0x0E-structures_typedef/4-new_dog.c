#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog using the alias dog_t
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return ((dog_t *)NULL);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
