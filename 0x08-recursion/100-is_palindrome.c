#include "main.h"
/**
 * last_ind - recursive function
 * @s: param
 * Return: (success)
 */
int is_palindrome(char *s);
int check(char *s, int a, int z, int k);
int last_ind(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += last_ind(s + 1) + 1;
	}
	return (n);
}
/**
 * is_palindrome - recursive function
 * @s: param
 * Return: (success)
 */
int is_palindrome(char *s)
{
	int z = last_ind(s);

	return (check(s, 0, z - 1, z % 2));
}
/**
 * check - function
 * @s: param
 * @a: param
 * @z: param
 * @k: modlus
 * Return: (success)
*/
int check(char *s, int a, int z, int k)
{
	if ((a == z && k != 0) || (a == z + 1 && k == 0))
	{
		return (1);
	}
	else if (s[a] != s[z])
	{
		return (0);
	}
	else
	{
		return (check(s, a + 1, z - 1, k));
	}
}
