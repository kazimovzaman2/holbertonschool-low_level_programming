#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/**
 * check_num - check the code
 *
 * @s: var
 *
 * Return: Always 0.
 */
int check_num(char *s)
{
	unsigned int count;

	count = 0;
	while (count < strlen(s))

	{
		if (!isdigit(s[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}



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
		if (check_num(argv[i]))
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
