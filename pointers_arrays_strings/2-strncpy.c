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

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\n';

	return dest;
}
