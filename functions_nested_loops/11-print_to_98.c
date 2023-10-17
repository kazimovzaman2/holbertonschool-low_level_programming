#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * @n: get integer value
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("98\n");
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("98\n");
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
}
