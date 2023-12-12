#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - check the code for
 *
 * @size: var
 *
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = NULL;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->array = malloc(size, sizeof(hash_node_t));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}

	table->size = size;

	return (table);
}
