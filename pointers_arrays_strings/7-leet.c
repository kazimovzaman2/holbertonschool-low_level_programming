#include "main.h"
#include <string.h>

/**
 * *leet - Entry point
 *
 * @bush: 'var'
 * Return: Always 0 (Success)
 */
char *leet(char *bush)
{
	int i, j;
	char letter[] = { 'a', 'e', 'o', 't', 'l' };
	char letterUP[] = { 'A', 'E', 'O', 'T', 'L' };
	char number[] = { 4, 3, 0, 7, 1 };

	for (i = 0; bush[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (bush[i] == letter[j] || bush[i] == letterUP[j])
				bush[i] = number[j] + '0';
		}
	}

	return (bush);
}
