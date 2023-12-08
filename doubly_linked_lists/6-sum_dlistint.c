#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - check the code
 *
 * @head: var
 *
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (!head)
		return (0);

	temp = head;
	while (temp->next)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
	return (sum);
}
