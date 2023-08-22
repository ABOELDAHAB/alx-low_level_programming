#include "main.h"

/**
 * puts_half - function that print half string
 * @str: parametr that store string
 *
 * Return: Always 1 (success)
*/

void puts_half(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)

	l++;
	for (l /= 2; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
