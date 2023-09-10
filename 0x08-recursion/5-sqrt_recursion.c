#include "main.h"

/**
 * _sqrt_recursion - recursive function
 * @n: param
 * @c: param
 * Return: (success)
 */
int square(int n, int c);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - prototype function
 * @c: param
 * @n: param
 * Return: (success)
 */
int square(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c * c < n)
	{
		return (square(n, c + 1));
	}
	else
	{
		return (-1);
	}
}
