#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "dog.h"

/**
 * new_dog - check the code
 *
 * @name: var
 * @age: var
 * @owner: var
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nl, ol, i;
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	nl = strlen(name);
	ol = strlen(owner);

	new->name = malloc(nl + 1);
	if (new->name == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		new->name[i] = name[i];
	new->name[i] = '\0';

	new->age = age;

	new->owner = malloc(ol + 1);
	if (new->owner == NULL)
	{
		free(new->owner);
		free(new->name);
		free(new);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		new->owner[i] = owner[i];
	new->owner[i] = '\0';

	return (new);
}
