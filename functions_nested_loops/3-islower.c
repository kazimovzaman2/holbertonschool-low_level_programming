#include "main.h"

/**
 * _islower - Entry point
 * @c: get integer value
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c > 97 && c < 122)
	{
		return (1);
	}
	return (0);
}
