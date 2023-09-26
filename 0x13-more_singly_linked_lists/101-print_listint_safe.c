#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocation
 * @list: param
 * @size: param
 * @new: param
 * Return: pointr
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **k;
	size_t i;

	k = malloc(size * sizeof(listint_t *));
	if (k == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		k[i] = list[i];
	k[i] = new;
	free(list);
	return (k);
}

/**
 * print_listint_safe - fun
 * @head: param
 * Return: 0
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
	}
	free(list);
	return (num);
}
