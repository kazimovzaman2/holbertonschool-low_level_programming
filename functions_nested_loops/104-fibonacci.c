#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'awdaw'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 98;
	unsigned long int num1 = '1';
	unsigned long int num2 = 2;
	unsigned long int next = num1 + num2;

	int count = 3;

	printf("%lu, %lu, ", num1, num2);

	while (count <= n)
	{
		if (count == 50)
		{
			printf("%lu", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		count++;
		num1 = num2;
		num2 = next;
		next = num1 + num2;
	}
	printf("\n");
	return (0);
}
