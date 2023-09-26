#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_f1 - func
 * @head: param
 * Return: 0
*/

listint_t *find_listint_loop_f1(listint_t *head)
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
/**
 * free_listint_safe - fun
 * @h: param
 * Return: 0
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *count;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	count = find_listint_loop_f1(*h);
	for (len = 0; (*h != count || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == count && loop)
		{
			if (count == count->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
