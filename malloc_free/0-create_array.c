#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - var
 * @size: var
 * @c: var
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;
	int si = size;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < si; i++)
	{
		s[i] = c;
	}
	return (s);
}
