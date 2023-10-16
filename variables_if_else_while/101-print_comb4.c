#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'putchar'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i < j)
			{
				for (k = 48; k <= 57; k++)
				{
					if (j < k)
					{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 56)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
