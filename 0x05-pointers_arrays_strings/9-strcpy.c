#include "main.h"

/**
 * *_strcpy - function that print string pointed by src
 * @dest: parameter
 * @src: parameters
 *
 * Return: 1 (success)
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
