#include "main.h"

/**
 * more_numbers - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j <= 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		j++;
	}
}
