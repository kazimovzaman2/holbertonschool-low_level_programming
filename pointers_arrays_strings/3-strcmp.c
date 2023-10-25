#include "main.h"
#include <string.h>

/**
 * _strcmp - Entry point
 *
 * @s1: 'varaibles'
 * @s2: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	do {
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (15);
			else
				return (s1[i] - s2[i]);
		}
		i++;
	} while (s1[i] != '\0' && s1[i] == s2[i]);
	return (0);
}
