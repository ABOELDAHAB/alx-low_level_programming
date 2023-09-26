#include "lists.h"

/**
 * insert_nodeint_at_index - fun
 * @head: param
 * @idx: param
 * @n: para
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *k, *l = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !l)
		return (NULL);

	l->n = n;
	l->next = NULL;
	if (!idx)
	{
		l->next = *head;
		*head = l;
		return (l);
	}
	k = *head;
	while (k)
	{
		if (i == idx - 1)
		{
			l->next = k->next;
			k->next = l;
			return (l);
		}
		i++;
		k = k->next;
	}
	free(l);
	return (NULL);
}
