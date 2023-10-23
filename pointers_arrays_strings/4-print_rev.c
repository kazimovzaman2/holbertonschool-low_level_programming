#include "main.h"

/**
 * print_rev - Entry point
 *
 * @s: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i;
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	size--;
	for (i = size; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
