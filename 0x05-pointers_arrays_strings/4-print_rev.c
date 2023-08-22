#include "main.h"

/**
 * print_rev - function that print reverse string
 *
 * @s: parameter that store string
 *
 * Return: Always 1 (success)
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i--)
	{
		_putchar (s[i]);
	}
	_putchar('\n');
}
