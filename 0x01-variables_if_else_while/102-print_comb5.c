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
	int n = 0, i;

	while (n <= 99)
	{
		i = n;
		while (i <= 99)
		{
			if (n != i)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);

				if (n != 98 || i != 99)
				{
					putchar(',');
					putchar(' ')i;
				}
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
