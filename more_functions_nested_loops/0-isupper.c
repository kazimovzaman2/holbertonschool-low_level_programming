#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
