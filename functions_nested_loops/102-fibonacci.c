#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'awdaw'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 50;
	long int num1 = 1;
	long int num2 = 1;
	long int next = num1 + num2;

	int count = 3;

	printf("%ld, %ld, ", num1, num2);

	while (count <= n)
	{
	if (count == 50)
	{
		printf("%ld", next);
	}
	else
	{
		printf("%ld, ", next);
	}
	count++;
	num1 = num2;
	num2 = next;
	next = num1 + num2;
	}
	printf("\n");

	return (0);
}
