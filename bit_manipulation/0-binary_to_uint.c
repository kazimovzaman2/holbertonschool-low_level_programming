#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - check the code
 *
 * @b: var
 *
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int res = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		res = (res << 1) | (*b - '0');

		b++;
	}

	return res;
}
