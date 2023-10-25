#include "main.h"

/**
 * *_strcat - Entry point
 *
 * @dest: 'varaibles'
 * @src: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char str3[100];

	while (dest[i] != '\0')
	{
		str3[j] = dest[i];
		i++;
		j++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		str3[j] = src[i];
		i++;
		j++;
	}
	str3[j] = '\0';

	i = 0;
	while (str3[i] != '\0')
	{
		dest[i] = str3[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
