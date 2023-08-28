#include "main.h"

/**
 * _strspn - library function
 * @s: pointer of string
 * @accept: character you want to find
 *
 * Return: poistion
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c, k;

	for (c = 0 ; s[c] != '\0' ; c++)
	{
		for (k = 0; accept[k] != s[c]; k++)
		{
			if (accept[k] == '\0')
				return (c);
		}
	}
	return (c);
}
