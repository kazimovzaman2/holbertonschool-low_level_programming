#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * @n: 'var'
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j != i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\\');
				}
			}
			if (i < n - 1)
				_putchar('\n');
		}
		_putchar('\n');
	}
}
