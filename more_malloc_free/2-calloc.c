#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - check the code
 *
 * @nmemb: var
 * @size: var
 *
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = calloc(nmemb, size);
	return (c);
}
