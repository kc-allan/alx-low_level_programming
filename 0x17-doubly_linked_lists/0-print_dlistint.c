#include "lists.h"
/**
 * print_dlistint - prints elements of a list
 * @h: head of list
 * Return: number of elements/nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;
	
	for (i = 0; h->next != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
