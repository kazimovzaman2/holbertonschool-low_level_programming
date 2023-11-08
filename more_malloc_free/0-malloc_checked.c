#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - check the code
 *
 * @b: var
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);

	return (c);
}
