#include "lists.h"
/**
 * listint_len - returns length of a list
 * @h: pointer to list
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
