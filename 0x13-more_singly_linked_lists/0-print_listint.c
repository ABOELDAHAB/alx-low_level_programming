#include "lists.h"

/**
 * print_listint - function print linked lists
 *
 * @h: parameter
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}
