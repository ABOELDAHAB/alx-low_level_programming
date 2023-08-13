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
	char cha = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cha <= 'Z')
	{
		putchar(cha);
		cha++;
	}
	putchar('\n');
	return (0);
}
