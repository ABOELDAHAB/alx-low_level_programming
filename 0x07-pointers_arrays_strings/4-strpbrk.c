#include "main.h"

/**
 * _strpbrk - library function
 * @s: pointer of string
 * @accept: character you want to find
 *
 * Return: poistion
 */

char *_strpbrk(char *s, char *accept)
{
	int c, k;
	char *p;

	c = 0;
	while (s[c] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (accept[k] == s[c])
			{
				p = &s[c];
				return (p);
			}
			k++;
		}
		c++;
	}
	return (0);
}
