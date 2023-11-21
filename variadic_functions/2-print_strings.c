#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - check the code
 *
 * @separator: var
 * @n: var
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ptr, char*));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);
}
