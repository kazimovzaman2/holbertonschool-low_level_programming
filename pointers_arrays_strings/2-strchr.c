#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point
 *
 * @s: 'varaibles'
 * @c: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
