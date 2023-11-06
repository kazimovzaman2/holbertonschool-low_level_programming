#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - check the code
 *
 * @s1: var
 * @s2: var
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int size1 = (s1 == NULL) ? 0 : strlen(s1);
	int size2 = (s2 == NULL) ? 0 : strlen(s2);
	int fullsize = size1 + size2;
	char *c = malloc(fullsize + 1);

	for (i = 0; i < size1; i++)
	{
		c[i] = s1[i];
	}
	for (; i < fullsize; i++)
	{
		c[i] = s2[i - size1];
	}
	c[i] = '\0';
	return (c);
}
