#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - check the code
 *
 * @separator: var
 * @n: var
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", va_arg(ptr, int));
		else
		{
			if (!seperator)
			printf("%d", va_arg(ptr, int));
		}
			printf("%d%s", va_arg(ptr, int), separator);
	}

	va_end(ptr);
}
