#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	int n;

	head = NULL;
	n = sum_dlistint(head);
	printf("-> %d\n", n);
	return (0);
}
