#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * free_list - check the code
 *
 * @head: var
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
