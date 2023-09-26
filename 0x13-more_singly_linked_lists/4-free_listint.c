#include "lists.h"

/**
 * free_listint - function
 * @head: param
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *k;

	while (head)
	{
		k = head;
		head = head->next;
		free(k);
	}
}
