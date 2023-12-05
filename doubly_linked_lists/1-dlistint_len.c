#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * dlistint_len - check the code
 *
 * @h: var
 *
 * Return: Always 0.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
