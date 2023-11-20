#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * @d: var
 * @name: var
 * @age: var
 * @owne: var
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
