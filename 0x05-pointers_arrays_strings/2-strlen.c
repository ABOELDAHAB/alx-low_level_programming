#include "main.h"

/**
 * _strlen - returns the lenght of string
 *
 * @s: string parameter
 *
 * Return: the lenght of character
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		++i;
	return (i);
}
