#include "lists.h"

/**
 * pop_listint - func
 * @head: param
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *k;
	int i;

	if (!head || !*head)
		return (0);

	k = (*head)->next;
	i = (*head)->i;
	free(*head);
	*head = k;
	return (i);
}
