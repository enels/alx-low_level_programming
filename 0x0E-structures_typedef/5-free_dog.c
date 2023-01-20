#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the dog struct
 * @d: dog_t variable to free
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d);
}
