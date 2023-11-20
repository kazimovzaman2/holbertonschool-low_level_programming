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
			printf("Name: (nil)\n");
			printf("Age: %f\n", d->age);
			printf("Owner: (nil)\n");
		}
		else if (d->owner == NULL)
		{
			printf("Name: (nil)\n");
			printf("Age: %f\n", d->age);
			printf("Owner: (nil)\n");
		}
		else if (d->age == 0)
		{
			printf("Name: (nil)\n");
			printf("Age: %f\n", d->age);
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
