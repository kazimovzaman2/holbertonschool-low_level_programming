#include "main.h"
#include <stdio.h>

/**
 * _strspn - Entry point
 *
 * @s: 'varaibles'
 * @accept: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, count = 0, size = strlen(accept), j;

	while (s[i])
	{
		for (c = 0 ; c < size2 ; c++)
		{
			if (s[i] == accept[c])
			{
				count = 1;
				break;
			}
		}
		if (count == 0)
			break;
		count = 0;
		i++;
	}

	return(i);
}
