#include "main.h"

/**
 * factorial - recursive function
 * @n: parameter
 *
 * Return: Always 0 (success)
 */

int factorial(int n)
{
	if (n == -1)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
