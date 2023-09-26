#include "lists.h"

/**
 * listint_len - function that print lenght
 * @h: param
 * Return: lenght
 */

size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}
	return (k);
}
