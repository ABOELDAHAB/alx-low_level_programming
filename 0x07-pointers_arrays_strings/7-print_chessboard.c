#include "main.h"

/**
 * print_chessboard - library function
 * @a: pointer of string
 *
 * Return: poistion
 */

void print_chessboard(char (*a)[8])
{
	int c, k;

	for (c = 0; c < 8; c++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[c][k]);
		}
		_putchar('\n');
	}
}
