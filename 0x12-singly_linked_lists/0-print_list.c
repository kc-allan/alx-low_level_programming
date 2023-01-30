#include "lists.h"
#include <stdio.h>
/**
 * print_list - peints all elements of list_t
 * @h: pointer to list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int sum = 0;

	if (h->nwxt == NULL)
		sum = 1;
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		sum++;
		h = h->next;
		if (h->next == NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			sum++;
			return (sum);
		}
	}
	return (0);
}
