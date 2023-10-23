#include "main.h"

/**
 * puts2 - Entry point
 *
 * @str: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		count++;
	}
	_putchar('\n');
}
