#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


/**
 * hash_table_print - check the code for
 *
 * @ht: var
 *
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	int comma = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];

		while (curr != NULL)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", curr->key, curr->value);
			comma = 1;

			curr = curr->next;
		}
	}
	printf("}\n");
}
