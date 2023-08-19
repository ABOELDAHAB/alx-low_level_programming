#include "main.h"

/**
 * print_alphabet_x10 - print the alphbet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
