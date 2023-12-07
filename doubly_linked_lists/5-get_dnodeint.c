#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - check the code
 *
 * @head: var
 * @index: var
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int n = 0;

	temp = head;
	while (temp != NULL)
	{
		if (index == n)
		{
			return (temp);
		}
		temp = temp->next;
		n++;
	}
	return (NULL);
}
