#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'awdaw'
 * Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long int a, b, s;
	int c;
	a = 1;
	b = 2;
	c = 3;

	printf("%lu, %lu", a, b);
	while (c < 99)
	{
		s = a + b;
		a = b;
		b = s;
		c++;
		printf(", %lu", s);
	}
	printf("\n");
	return (0);
}
