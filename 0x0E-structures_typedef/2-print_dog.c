#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print members of struct dog
 * @d: dog to print out
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d->name != (char *)NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (null)\n");
	}
	if (d->age != 0)
	{
		printf("Age: %g\n", d->age);
	}
	else
	{
		printf("Age: (null)\n");
	}
	if (d->owner != (char *)NULL)
	{
		printf("Onwer: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (null)\n");
	}
}
