#include "main.h"

/**
 * *_strstr - library function
 * @haystack: pointer of string
 * @needle: character you want to find
 *
 * Return: poistion
 */

char *_strstr(char *haystack, char *needle)
{
	char *c;
	char *k;

	for (; *haystack != '\0'; haystack++)
	{
		c = haystack;
		k = needle;

		while (*c == *k && *k != '\0')
		{
			c++;
			k++;
		}
		if (*k == '\0')
			return (haystack);
	}
	return (0);
}
