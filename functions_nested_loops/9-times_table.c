#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j, a, b, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * j;

			if (j > 0 && a < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (j > 0 && a >= 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (a >= 10)
			{
				r = a % 10;
				b = a / 10;
				_putchar(b + '0');
				_putchar(r + '0');
			}
			else
			{
				_putchar(a + '0');
			}
		}
		_putchar('\n');
	}
}
