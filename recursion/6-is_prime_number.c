#include "main.h"



/**
 * check_prime - check the code
 *
 * @n: var
 * @l: var
 *
 * Return: Always 0.
 */
int check_prime(int n, int l)
{
	int result = 0;

	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % l == 0)
		return (0);
	if (l <= n / 2)
		return (1);
	result = check_prime(n, l + 1);
	return (result);
}




/**
 * is_prime_number - check the code
 *
 * @n: var
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (check_prime(n, 2));
}
