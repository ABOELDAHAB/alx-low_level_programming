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
	int i = 0;

	while (n <= 9)
	{
		while (i <= 9)
		{
			if (n != i && n < i)
			{
				putchar(n + 48);
				putchar(i + 48);

				if (n + i != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
