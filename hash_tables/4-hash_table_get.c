#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


/*
 * hash_table_get - function
 *
 * @ht: var
 * @key: var
 *
 * Return: Always
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *curr;

	if (!ht || !key)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	curr = ht->array[i];

	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}

	return (NULL);
}
