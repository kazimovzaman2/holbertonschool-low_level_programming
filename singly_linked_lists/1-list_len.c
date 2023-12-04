#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * list_len - check the code
 *
 * @h: var
 *
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
