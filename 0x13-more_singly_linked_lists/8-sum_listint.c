#include "lists.h"

/**
 * sum_listint - fun
 * @head: param
 * Return: 0
*/
int sum_listint(listint_t *head)
{
	int result = 0;

	while (head)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
