#include "main.h"

/**
 * swap_int - swap between two values
 *@a: is parameter 1
 *@b: is parameter 2
 *
 * Return: Always 0
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*b = tmp;
	*a = *b;
}
