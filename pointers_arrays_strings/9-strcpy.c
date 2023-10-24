#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - Entry point
 *
 * @dest: 'varaibles'
 * @src: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest += '\0';
	return (dest);
}
