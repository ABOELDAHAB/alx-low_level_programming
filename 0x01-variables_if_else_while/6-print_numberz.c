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
	int n = 0;

	while (n < 10)
	{
		putchar(n + 48);
		n++;
	}
	puchar('\n');
	return (0);
}
