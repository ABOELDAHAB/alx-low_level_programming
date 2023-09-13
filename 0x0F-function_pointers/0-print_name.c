#include "FUNCTION_POINTERS_H"

/**
 * print_name - function
 * @name: pointer param
 * @f: function pointer
 * Return: success
 */


void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
