#include "main.h"

/**
 * rev_string - function that print reverse string
 * @s: parametr that store string
 *
 * Return: Always 1 (success)
*/

void rev_string(char *s)
{
	int l, i;
	char tmp;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}
}