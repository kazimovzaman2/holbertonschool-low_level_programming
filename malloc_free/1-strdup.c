#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code
 *
 * @str: var
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
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
		s[i] = str[i];
	}
	return (s);
}
