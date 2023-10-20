#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i = 2;
	long n = 612852475143;

	while (i != n)
	{
		if (n % i == 0)
		{
			n = n / i;
			continue;
		}
		i++;
	}
	printf("%ld\n", n);
	return (0);
}
