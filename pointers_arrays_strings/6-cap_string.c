#include "main.h"
#include <string.h>

/**
 * *cap_string - Entry point
 *
 * @bush: 'var'
 * Return: Always 0 (Success)
 */
char *cap_string(char *bush)
{
	int i;

	for (i = 0; bush[i] != '\0'; i++)
	{
		if (i == 0 && bush[i] >= 97 && bush[i] <= 122)
			bush[i] = bush[i] - 32;
		if (bush[i] == 32 || bush[i] == 10 || bush[i] == 9)
		{
			if (bush[i + 1] >= 97 && bush[i + 1] <= 122)
				bush[i + 1] = bush[i + 1] - 32;
		}
	}

	return (bush);
}
