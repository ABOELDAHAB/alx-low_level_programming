#include "variadic_functions.h"


/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n: the number of args
 * @...: the int to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int k = i;
	va_list ap;

	if (!i)
	{
		printf("\n");
		return;
	}
	va_start(ap, i);
	while (k--)
		printf("%d%s", va_arg(ap, int),
				k ? (separator ? separator : "") : "\n");
	va_end(ap);
}
