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
	int size;

	if (str == NULL)
                return (NULL);

	size = strlen(str);
	s = malloc((sizeof(char) * size) + 1);
	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
