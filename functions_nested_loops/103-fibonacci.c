#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'awdaw'
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	long int next = num1 + num2;
	int total = 0;


	while (1)
	{
		num1 = num2;
		num2 = next;
		next = num1 + num2;
		if (next >= 40000000)
			break;
		total = total + next;
	}

	printf("%d\n", total);
	return (0);
}
