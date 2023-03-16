#include "lists.h"
/**
 * dlistint_len - prints elements of a list
 * @h: head of list
 * Return: number of elements/nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h->prev != NULL)
		h = h->prev;
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
