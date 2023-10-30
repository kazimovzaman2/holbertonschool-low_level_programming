#include "main.h"

/**
 * _strlen_recursion - check the code
 *
 * @s: var
 * Return: Always 0.
 */
int i = 0;
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (i);
	}
	i++;
	s++;
	_strlen_recursion(s);
}
