#include "main.h"


/**
 * sqrt_2 - check the code
 *
 * @n: var
 * @k: var
 *
 * Return: Always 0.
 */
int sqrt_2(int n, int k)
{
	if (n == k)
		return (1);
	if (n * n == k)
		return (n);
	return (sqrt_2(n + 1, k));
}



/**
 * _sqrt_recursion - check the code
 *
 * @n: var
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (sqrt_2(1, n));
}
