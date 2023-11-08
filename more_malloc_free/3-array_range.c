#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - check the code
 *
 * @min: var
 * @max: var
 *
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	char *c;
	int i;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		malloc(c);
		if (c == NULL)
			return (NULL);
	}
	return (c);
}
