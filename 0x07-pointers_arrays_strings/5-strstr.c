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
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *k = needle;

		while (*c == *k && *p != '\0')
		{
			c++;
			k++;
		}
		if (*k == '\0')
			return (haystack);
	}
	return (0);
}
