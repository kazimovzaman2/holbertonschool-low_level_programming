#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - check the code
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
		{
			printf("Name: (nil)");
			printf("Age: %f", d->age);
			printf("Owner: (nil)");
		}
		else if (d->owner == NULL)
		{
			printf("Name: (nil)");
			printf("Age: %f", d->age);
			printf("Owner: (nil)");
		}
		else if (d->age == 0)
		{
			printf("Name: (nil)");
			printf("Age: %f", d->age);
			printf("Owner: (nil)");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
