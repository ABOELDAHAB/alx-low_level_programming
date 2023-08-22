#include "main.h"

/**
 * _puts - function that prints string
 *
 *@str: parameter that store string
 *
 * Return: Always 0 (success)
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
