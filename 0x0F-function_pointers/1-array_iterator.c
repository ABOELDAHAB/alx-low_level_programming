#include "function_pointer_h"

/**
 * array_iterator - array
 * @array: int array
 * @size: the size of array
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
