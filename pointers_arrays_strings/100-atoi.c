#include "main.h"
#include <string.h>

/**
 * _atoi - Entry point
 *
 * @s: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	short boolean = 0;
	int i = 0, minus = -1, result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus *= -1;

		if (s[i] >= '1' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	result *= minus;
	return (result);
}
