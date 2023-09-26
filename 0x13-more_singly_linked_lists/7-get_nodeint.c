#include "list.h"

/**
 * get_nodeint_at_index - funct
 * @head: first para
 * @index : second param
 * Return: 0
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *k;
	unsigned int n;

	for (k = head, n = 0; k && n < index; k = k->next, n++)
		;
	return (k);
}
