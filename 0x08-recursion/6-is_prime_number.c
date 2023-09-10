#include "main.h"

/**
 * is_prime_number - recursive function
 * @n: param
 * @c: param
 *
 * Return: (success)
 */
int check_prime(int n, int c);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - prototype function
 * @n: param
 * @c: param
 * Return: (success)
 */
int check_prime(int n, int c)
{
	if (c >= n && n > 2)
	{
		return (1);
	}
	else if (n % c == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, c + 1));
	}
}
