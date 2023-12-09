#include <stdio.h>
#include "main.h"

/**
 * set_bit - check the code
 *
 * @n: var
 * @index: var
 *
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n, num_to_add = 1;
	unsigned int size_ulong = sizeof(num) * 8, i = 0;

	if (index < sizeulong)
	{
		if (((num >> index) & 1) == 0)
		{
			while (i != index)
			{
				num_to_add *= 2;
				i++;
			}
			num = num + num_to_add;
			*n = num;
		}
		return (1);
	}
	else
		return (-1);
}
