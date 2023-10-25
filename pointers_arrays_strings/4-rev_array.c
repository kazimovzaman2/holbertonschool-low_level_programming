#include "main.h"
#include <string.h>

/**
 * reverse_array - Entry point
 *
 * @a: 'varaibles'
 * @n: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, j = n - 1;
	for (i = 0; i < n / 2; i++, j--)
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
