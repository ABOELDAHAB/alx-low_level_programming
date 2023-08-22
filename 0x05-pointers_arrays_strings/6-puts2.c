#include "main.h"

/**
 * puts2 - function that print reverse string
 * @str: parametr that store string
 *
 * Return: Always 1 (success)
*/

void puts2(char *str)
{
	int l, i;

	while (str[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}
	_putcjar('\n');
}
