#include "main.h"

/**
 * print_times_table - Entry point
 * @n: get integer value
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j, a;

	for (i = 0; i <= n; i++)
	{
		if (n < 0 || n > 15)
			break;
		for (j = 0; j <= n; j++)
		{
			a = i * j;

			if (j > 0 && a >= 100)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (j > 0 && a >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (j > 0 && a < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			make_slice(a);
		}
		_putchar('\n');
	}
}


/**
 * make_slice - slices number for putchar.
 * @a: int.
 *
 * Return: void.
 */
void make_slice(int a)
{
	if (a >= 100)
	{
		_putchar((a / 100) + '0');
		_putchar(((a % 100) / 10) + '0');
		_putchar((a % 10) + '0');
	}
	else if (a >= 10)
	{
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
	}
	else
	{
		_putchar(a + '0');
	}
}
