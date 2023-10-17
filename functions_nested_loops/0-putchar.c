#include "main.h"


/**
 * main - Entry point
 *
 * Description: '0'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char c[] = "_putchar";

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
