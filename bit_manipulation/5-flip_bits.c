#include <stdio.h>
#include "main.h"

/**
 * flip_bits - check the code
 *
 * @n: var
 * @m: var
 *
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val;
	unsigned int i = 0;

	val = n ^ m;

	while (val != 0)
	{
		if ((val & 1) == 1)
			i++;
		val = val >> 1;
	}
	return (i);
}
