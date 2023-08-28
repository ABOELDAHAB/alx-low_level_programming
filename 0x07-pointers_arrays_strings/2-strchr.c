#include "main.h"

/**
 * *_strchr - library function
 * @s: pointer of string
 * @c: character you want to find
 *
 * Return: poistion
 */

char *_strchr(char *s, char c)
{
	int k;

	for (k = 0 ; s[k] >= '\0' ; k++)
	{
		if (s[k] == c)
		{
			return (s + k);
		}
	}
	return ('\0');
}
