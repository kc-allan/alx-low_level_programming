#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at idx
 * @h: pointer to list
 * @idx: index of new node
 * @n: element of node
 * Return: new updated list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i, k;
	dlistint_t *new, *temp, *count;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}
	if (*h == NULL)
		return (new);
	while ((*h)->prev != NULL)
		*h = (*h)->prev;
	count = *h;
	for (k = 0; count->next != NULL; k++)
		count = count->next;
	if (k + 1 == idx || (int)idx < 0)
	{
		add_dnodeint_end(h, n);
		return (*h);
	}
	if (idx > k + 1)
		return (NULL);
	for (i = 0; (*h)->next != NULL; i++)
	{
		if (i == idx - 1)
		{
			new->prev = *h;
			temp = (*h)->next;
			(*h)->next = new;
		}
		*h = (*h)->next;
	}
	*h = temp;
	new->next = *h;
	return (*h);
}
