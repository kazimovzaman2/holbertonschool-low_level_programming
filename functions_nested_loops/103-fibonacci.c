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
	long total = 0;


	while (num1 < 4000000)
	{
		if (num1 % 2 == 0)
			total += num1;
		num1 = num2;
		num2 = next;
		next = num1 + num2;
	}

	printf("%ld\n", total);
	return (0);
}
