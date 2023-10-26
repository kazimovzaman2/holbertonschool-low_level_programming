#include "main.h"

/**
 * reset_to_98 - Entry point
 *
 * @n: 'varaibles'
 * @s: 'varaibles'
 * @b: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int l = n;

	for (i = 0; i < l; i++)
	{
		s[i] = b;
	}
	return (s);
}
