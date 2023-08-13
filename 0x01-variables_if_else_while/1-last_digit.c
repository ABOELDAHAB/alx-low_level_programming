#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print status of the last digit
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("the last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("the last digit of %i is %i is and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		printf("the last digit of %i is %i is less than 6 and not 0\n", n, digit);
	return (0);
}
