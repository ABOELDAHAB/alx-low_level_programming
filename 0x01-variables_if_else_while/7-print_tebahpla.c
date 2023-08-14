#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers from 0 to 9
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
