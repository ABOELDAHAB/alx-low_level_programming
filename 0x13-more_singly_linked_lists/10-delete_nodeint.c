#include "lists.h"

/**
 * delete_nodeint_at_index - fun
 * @head: param
 * @index: param
 * Return: 0
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *k, *l;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		k = *head;
		*head = (*head)->next;
		free(k);
		return (1);
	}
	k = *head;
	while (k)
	{
		if (i == index)
		{
			l->next = k->next;
			free(k);
			return (1);
		}
		i++;
		l = k;
		k = k->next;
	}
	return (-1);
}
