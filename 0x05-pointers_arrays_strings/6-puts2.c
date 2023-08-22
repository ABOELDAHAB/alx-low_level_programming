#include "main.h"

/**
 * puts2 - function that print reverse string
 * @str: parametr that store string
 *
 * Return: Always 1 (success)
*/

void puts2(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		if (l % 2 == 0)
			_putchar(str[l]);
	}
	_putchar('\n');
}
