#include "main.h"

/**
 * print_square - Entry point
 *
 * @size: 'var'
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
			if (j == size - 1)
			{
				_putchar('\n');
			}
		}
	}
}
