#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements of the list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
