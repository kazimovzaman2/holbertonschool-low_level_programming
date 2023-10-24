#include "main.h"
#include <string.h>

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

	i = strlen(src);

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		i--;
	}
	return (dest);
}
