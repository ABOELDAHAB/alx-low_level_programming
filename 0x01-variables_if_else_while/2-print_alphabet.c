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
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch"\n");
		ch++;
	}
	return (0);
}
