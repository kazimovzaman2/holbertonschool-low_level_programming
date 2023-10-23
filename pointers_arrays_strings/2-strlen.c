#include "main.h"

/**
 * _strlen - Entry point
 *
 * @s: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}
