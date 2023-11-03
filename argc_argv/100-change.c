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
	int num;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (1);
	}

	num = atoi(argv[1]);
	while (num != 0)
	{
		if (num >= 25)
			num = num - 25;
		else if (num >= 10)
			num = num - 10;
		else if (num >= 5)
			num = num - 5;
		else if (num >= 2)
			num = num - 2;
		else if (num >= 1)
			num = num - 1;

		count = count + 1;
	}

	printf("%d\n", count);
	return (0);
}
