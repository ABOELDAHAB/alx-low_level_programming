#include "main.h"

/**
 * *_memset - library function
 * @*s: pointer of string
 * @s: array of string
 * @b: number of characters
 * @n: number you want to change
 *
 * Return: poistion
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0 ; n > 0; c++, n--)
	{
		s[c] = b;
	}
	return (s);
}
