#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
	int result = 0, i;

	for (i = 1; i <= argc - 1; i++)
	{
		if (isdigit(*argv[i]))
		{
			result = result + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", result);
	return (0);
}
