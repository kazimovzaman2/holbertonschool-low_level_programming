#include "search_algos.h"


/**
 * linear_search - check the code
 *
 * @array: var
 * @size: var
 * @value: var
 *
 * Return: Always 0.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}

	return (-1);
}
