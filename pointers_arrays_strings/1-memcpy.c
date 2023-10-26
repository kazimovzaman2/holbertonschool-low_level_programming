#include "main.h"

/**
 * _memcpy - Entry point
 *
 * @dest: 'varaibles'
 * @src: 'varaibles'
 * @n: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int len = n;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
