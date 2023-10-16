#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'putchar'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
		printf("%d", ch);
	putchar('\n');
	return (0);
}
