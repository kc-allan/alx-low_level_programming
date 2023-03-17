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
	unsigned int i;
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*h == NULL)
		return (new);
	while ((*h)->prev != NULL)
		*h = (*h)->prev;
	for (i = 0; (*h)->next != NULL; i++)
	{
		if (i == idx)
		{
			new->prev = *h;
			temp = (*h)->next;
			(*h)->next = new;
			break;
		}
		*h = (*h)->next;
	}
	*h = temp;
	new->next = *h;
	return (*h);
}
