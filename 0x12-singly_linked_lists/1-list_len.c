#include "lists.h"
/**
 * list_len - returns length of a list
 * @h: pointer to list
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	unsigned int sum = 0;

	while (h != NULL)
	{
		h = h->next;
		sum++;
	}
	return (sum);
}
