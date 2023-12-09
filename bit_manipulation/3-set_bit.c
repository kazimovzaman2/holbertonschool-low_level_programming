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
	int clearBit = ~(1<<index);
	int mask = *n & clearBit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = mask |(1<<index);
	return (*n);
}
