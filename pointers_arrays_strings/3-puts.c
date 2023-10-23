#include "main.h"

/**
 * _puts - Entry point
 *
 * @str: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i;
	int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	for (i = 0; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
