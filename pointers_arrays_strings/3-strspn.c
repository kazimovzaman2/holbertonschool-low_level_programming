#include "main.h"
#include <string.h>

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
		for (j = 0 ; j < size; j++)
		{
			if (s[i] == accept[j])
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
