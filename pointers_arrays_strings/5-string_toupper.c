#include "main.h"
#include <string.h>

/**
 * *string_toupper - Entry point
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *bush)
{
	int i, l = strlen(bush);

	for (i = 0; i < l; i++)
	{
		int x = bush[i];
		if (bush[i] >= 97 && bush[i] <= 122)
			bush[i] = x - 32;
	}

	return (bush);
}
