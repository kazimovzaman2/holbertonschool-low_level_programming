#include "main.h"

/**
 * rot13 - check the code
 *
 * @bush - 'var'
 *
 * Return: Always 0.
 */
char *rot13(char *bush)
{
	int i;

	for (i = 0; bush[i] != '\0'; i++)
	{
		char base = (bush[i] >= 'a' && bush[i] <= 'z') ? 'a' : 'A';

		if (bush[i] >= base && bush[i] <= base + 25)
			bush[i] = ((bush[i] - base + 13) % 26) + base;
	}
	return (bush);
}
