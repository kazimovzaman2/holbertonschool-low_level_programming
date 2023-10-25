#include "main.h"
#include <string.h>

/**
 * *string_toupper - Entry point
 *
 * @bush: 'var'
 * Return: Always 0 (Success)
 */
char *string_toupper(char *bush)
{
	int i;

	for (i = 0; bush[i] != '\0'; i++)
	{
		int x = bush[i];

		if (bush[i] >= 97 && bush[i] <= 122)
		{
			bush[i] = x - 32;
		}
	}

	return (bush);
}
