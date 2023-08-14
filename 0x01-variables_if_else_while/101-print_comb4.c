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
	int n = 0, i, j;

	while (n <= 9)
	{
		i = 0;
		while (i <= 9)
		{
			j = 0;
			while (j <= 9)
			{
				if (n != i && n < i && i != j && i < j)
				{
					putchar(n + 48);
					putchar(i + 48);
					putchar(j + 48);

					if (n + i + j  != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				j++;
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
