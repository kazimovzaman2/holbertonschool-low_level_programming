#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *insert_dnodeint_at_index - check the code
 *
 * @h: var
 * @idx: var
 * @n: var
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new); }
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL); }
		current = current->next; }
	if (current == NULL)
	{
		free(new);
		return (NULL); }
	new->next = current->next;
	new->prev = current;

	if (current->next != NULL)
		current->next->prev = new;

	current->next = new;

	return (new);
}
