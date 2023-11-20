#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * printf_dog - check the code
 *
 * @d: var
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else if (d->owner == NULL)
			printf("Owner: (nil)");
		else if (d->age == 0)
			printf("Age: (0)");
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
