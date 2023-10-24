#include "main.h"

/**
 * puts_half - Entry point
 *
 * @str: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int size = 0;
	int i;

	while (str[size] != '\0')
	{
		size++;
	}

	if (size % 2 == 0)
	{
		for (i = size / 2; i < size; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (size - 1) / 2; i < size; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
