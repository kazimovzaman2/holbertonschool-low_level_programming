#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print comment using puts()'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char st[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int n = 0;
	while (st[n] != '\0') {
		putchar(st[n]);
		n++;
	}
	return (0);
}
