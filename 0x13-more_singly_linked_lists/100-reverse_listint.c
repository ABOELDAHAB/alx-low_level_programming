#include "lists.h"

/**
 * reverse_listint - fun
 * @head: param
 * Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *k = NULL, *l = NULL;

	if (!head || !*head)
		return (NULL);

	k = *head;
	*head = NULL;
	while (k)
	{
		l = k->next;
		k->next = *head;
		*head = k;
		k = l;
	}
	return (*head);
}
