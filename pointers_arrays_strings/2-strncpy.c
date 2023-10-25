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

	while (src[i] != '\0')
	{
		if (i == n)
			break;
		*(dest + i) = *(src + i);
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\n';

	return dest;
}
