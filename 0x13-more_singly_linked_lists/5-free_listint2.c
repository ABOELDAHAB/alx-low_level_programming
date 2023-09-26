#include "lists.h"

/**
 * free_listint2 - func
 * @head: param
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *k;
	listint_t *tem;

	if (!head)
		return;

	k = *head;
	while (k)
	{
		tem = k;
		k = k->next;
		free (tem);
	}
	*head = NULL;
}
