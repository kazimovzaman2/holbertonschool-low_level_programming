#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int size = strlen(str);

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
