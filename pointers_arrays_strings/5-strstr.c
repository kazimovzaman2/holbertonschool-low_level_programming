#include "main.h"
#include <string.h>

/**
 * _strstr - Entry point
 *
 * @haystack: 'varaibles'
 * @needle: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;
	int len = strlen(needle);

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + len] == needle[j + len])
				return (&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
