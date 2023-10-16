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

	for (ch = 48; ch <= 57; ch++)
		putchar(ch);
	for (ch = 97; ch <= 102; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
