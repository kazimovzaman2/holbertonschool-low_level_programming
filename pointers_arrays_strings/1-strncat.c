#include "main.h"
#include <string.h>

/**
 * *_strncat - Entry point
 *
 * @dest: 'varaibles'
 * @src: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int l = strlen(dest);

	while (i == n - 1)
	{
		*(dest + l + i) = *(src + i);
		i++;
	}

	return (dest);	
}
