#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabit letters except q and e
 *
 * Return: 0 (success)
*/

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		putchar(ch);
		ch++;
	}
	putchar("\n");
	return (0);
}
