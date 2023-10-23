#include "main.h"

/**
 * rev_string - Entry point
 *
 * @s: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	char *a;
	int c = 0;

	while (*s != '\0')
	{
		*a = *s;
		c++;
		s++;
		a++;
	}

	s--;
	for (; c > 0; c--)
	{
		*s = *(a - c);
		s--;
	}
}
