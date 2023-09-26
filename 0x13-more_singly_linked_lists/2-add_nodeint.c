#include "lists.h"
/**
 * add_nodeint - function that add two node
 * @head: param
 * @n: new
 * Return: value of addittion
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *k = malloc(sizeof(listint_t));

	if (!head || !k)
		return (NULL);

	k->next = NULL;
	k->n = n;
	if (*head)
		k->next = *head;
	*head = k;
	return (k);
}

