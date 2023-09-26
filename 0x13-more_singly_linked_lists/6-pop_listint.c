#include "lists.h"

/**
 * pop_listint - func
 * @head: param
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *k;
	int n;

	if (!head || !*head)
		return (0);

	k = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = k;
	return (n);
}
