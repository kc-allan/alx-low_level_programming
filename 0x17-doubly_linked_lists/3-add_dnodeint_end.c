#include "lists.h"
/**
 * add_dnodeint_end - adds node to the end of list
 * @head: pointer to start of list
 * @n: number to be added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int i;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		for (i = 0; (*head)->next != NULL; i++)
			*head = (*head)->next;
		new->prev = *head;
		(*head)->next = new;
	}
	return (new);
}
