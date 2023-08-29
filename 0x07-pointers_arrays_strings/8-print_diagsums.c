#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - library function
 * @a: pointer of string
 * @size: size of array
 *
 * Return: poistion
 */

void print_diagsums(int *a, int size)
{
	int c, k = 0, k2 = 0;

	for (c = 0; c < size; c++)
	{
		k += a[c];
		k2 += a[size - c - 1];
		a += size;
	}
	printf("%d, ", k);
	printf("%d\n", k2);
}
