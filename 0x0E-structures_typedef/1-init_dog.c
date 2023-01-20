#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize variable of type dog
 * @d: pointer to type struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
