#include "main.h"
#include <string.h>

/**
 * print_diagsums - check the code
 *
 * @a: 'var'
 * @size: 'var'
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int fd = 0;
	int sd = 0;

	for (i = 0; i < size; i++)
	{
		fd = fd + a[i * size + i];
	}
	for (i = 0; i < size; i++)
	{
		sd = sd + a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", fd, sd);
}
