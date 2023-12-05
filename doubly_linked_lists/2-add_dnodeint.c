#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * add_dnodeint - check the code
 *
 * @head: var
 * @n: var
 *
 * Return: Always 0.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
