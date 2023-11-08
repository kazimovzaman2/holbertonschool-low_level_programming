#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - check the code
 *
 * @s1: var
 * @s2: var
 * @n: var
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int size1 = (s1 == NULL) ? 0 : strlen(s1);
	int size2 = (s2 == NULL) ? 0 : (n >= strlen(s2) ? strlen(s2) : n);
	int fullsize = size1 + size2;
	char *c = malloc(fullsize + 1);

	if (c == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		c[i] = s1[i];
	for (; i < fullsize; i++)
		c[i] = s2[i - size1];

	c[i] = '\0';
	return (c);
}
