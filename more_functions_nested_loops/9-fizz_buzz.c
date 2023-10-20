#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
		printf("%d ", i);
	}
	return (0);
}
