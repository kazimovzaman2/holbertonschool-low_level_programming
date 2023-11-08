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
	int *result, i;

	if (min > max)
		return (NULL);

	result = malloc(sizeof(int) * (max - min + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; max >= min; min++, i++)
		result[i] = min + i;

	return (result);
}
