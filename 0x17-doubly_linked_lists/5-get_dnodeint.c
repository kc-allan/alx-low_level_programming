#include "lists.h"
/**
 * get_dnodeint_at_index - gets nth node in list
 * @head: pointer to list
 * @index: index to be searched
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	for (i = 0; i < index && head->next != NULL; i++)
	{
		if (i == index)
			break;
		head = head->next;
	}
	return (head);
}
