#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * print_list - check the code
 *
 * @h: var
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
