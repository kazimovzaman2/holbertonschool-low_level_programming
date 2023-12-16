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
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new_node;

	if (!key || !ht)
		return (0);

	i = key_index((unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);

	strcpy(new_node->value, value);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;

	return (1);
}
