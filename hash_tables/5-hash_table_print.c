#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


/**
 * hash_table_set - check the code for
 *
 * @ht: var
 * @key: var
 * @value: var
 *
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];

		while (curr != NULL)
		{
			printf("'%s': '%s'", curr->key, curr->value);

			if (curr->next != NULL)
				printf(", ");

			curr = curr->next;
		}
	}
	printf("}\n");
}
