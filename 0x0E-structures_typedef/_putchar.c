#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: Always success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
