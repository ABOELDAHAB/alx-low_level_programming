#include "variadic_functions.h"


/**
 * sum_them_all - sum variable arg
 * @n: the number of arg
 * @...: the left of arg
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list k;

	if (!n)
		return (0);
	va_start(k, n);
	while (i--)
		s += va_arg(k, int);
	va_end(k);
	return (s);
}
