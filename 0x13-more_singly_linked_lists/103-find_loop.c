#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - fun
 * @head: param
 * Return: 0
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *k;

	if (head == NULL)
		return (NULL);
	for (k = head->next; k != NULL; k = k->next)
	{
		if (k == k->next)
			return (k);
		for (p = head; p != k; p = p->next)
			if (p == k->next)
				return (k->next);
	}

	return (NULL);
}
