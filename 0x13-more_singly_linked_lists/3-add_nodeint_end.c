#include "lists.h"

/**
 * add_nodeint_end - funct
 * @head: param
 * @n: value
 * Return: sum
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *k = malloc(sizeof(listint_t));
	listint_t *l;

	if (!head || !k)
		return (NULL);

	k->next = NULL;
	k->n = n;
	if (!*head)
		*head = k;
	else
	{
		l = *head;
		while (l->next)
			l = l->next;
		l->next = k;
	}
	return (k);
}
