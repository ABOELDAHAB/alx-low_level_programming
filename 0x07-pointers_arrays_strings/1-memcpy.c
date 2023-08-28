#include "main.h"

/**
 * *_memcpy - library function
 * @dest: destination of pointer of string
 * @src: array of string
 * @n: number you want to change
 *
 * Return: poistion
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0 ; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
