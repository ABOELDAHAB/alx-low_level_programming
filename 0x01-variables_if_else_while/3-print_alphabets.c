#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the alphabit by using putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
