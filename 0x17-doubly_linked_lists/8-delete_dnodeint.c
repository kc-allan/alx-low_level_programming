#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at an index
 * @head: pointer to list
 * @index: position of node to be deleted
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	if (*head == NULL)
		return (-1);
	current = *head;
	while (current->prev != NULL)
		current = current->prev;
	for (i = 0; current != NULL; i++)
	{
		if (i == index)
		{
			if (current->prev == NULL && current->next == NULL)
				*head = NULL;
			else if (current->prev == NULL)
			{
				*head = current->next;
				(*head)->prev = NULL;
			}
			else if (current->next == NULL)
				current->prev->next = NULL;
			else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
			}
			free(current);
			return (1);
		}
		current = current->next;
	}
	return (-1);
}
