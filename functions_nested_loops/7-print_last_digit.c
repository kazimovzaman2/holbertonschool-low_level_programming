#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: get integer value
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		int result = n % 10;
		_putchar(result + 48);
		return (result);
	}
	else if (n < 0)
	{
		int result = -1 * n;
		int result1 = result % 10;
		_putchar(result1 + 48);
		return (result1);
	}
}
