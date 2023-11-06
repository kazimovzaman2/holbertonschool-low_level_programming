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

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
