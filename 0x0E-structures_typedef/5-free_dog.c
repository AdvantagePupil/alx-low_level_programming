#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Entry point
 *
 * description: a function that frees dogs.
 *
 * @d: dog
 *
 * Return: always 0 (success)
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
