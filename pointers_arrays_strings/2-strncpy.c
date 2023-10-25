#include "main.h"
#include <string.h>

/**
 * *_strncpy - Entry point
 *
 * @dest: 'varaibles'
 * @src: 'varaibles'
 * @n: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int size = strlen(src);

	while (i < n)
	{
		if (i < size)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
			i++;
		}
	}

	return (dest);
}
