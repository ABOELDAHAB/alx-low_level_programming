#include "main.h"

/**
 * _strlen_recursion - recursive function
 * @s: parameter
 *
 * Return: Always 0 (success)
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n = n + _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
