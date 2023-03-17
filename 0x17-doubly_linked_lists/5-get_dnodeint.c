#include "lists.h"
/**
 * get_dnodeint_at_index - gets nth node in list
 * @head: pointer to list
 * @index: index to be searched
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head->prev != NULL; i++)
		head = head->prev;
	for (i = 0; head->next != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
