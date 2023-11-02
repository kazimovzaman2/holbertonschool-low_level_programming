#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 *
 * @argc: var
 * @argv: var
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result, i;

	for (i = 0; i < argc; i++)
	{
		if (*argv[i] >= 48 && *argv[i] <= 57)
		{
			result = result + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
		}
	}

	printf("%d\n", result);
	return (0);
}
