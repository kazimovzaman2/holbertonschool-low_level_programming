#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - check the code
 *
 * @d: var
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
