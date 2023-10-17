#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: get integer value
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		int k = n % 10;
		int m = k * -1;

		_putchar(m + 48);
		return (m);
	}
	else
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
}
