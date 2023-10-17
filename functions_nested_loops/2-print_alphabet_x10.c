#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;
	
	while (i < 10)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	i++;
	_putchar('\n');
	}
}
