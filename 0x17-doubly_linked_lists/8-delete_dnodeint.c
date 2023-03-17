#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at an index
 * @head: pointer to list
 * @index: position of node to be deleted
 * Return: updated list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;

	if (*head == NULL || (int)index < 0)
		return (-1);
	while ((*head)->prev != NULL)
		*head = (*head)->prev;
	for (i = 0; (*head)->next != NULL; i++)
	{
		if (i == index)
		{
			if ((*head)->next == NULL)
				((*head)->prev)->next = NULL;
			else if (index == 0)
				((*head)->next)->prev = NULL;
			else
			{
				((*head)->prev)->next = (*head)->next;
				((*head)->next)->prev = (*head)->prev;
			}
			free(*head);
		}
		*head = (*head)->next;
	}
	if (index > i)
		return (-1);
	return (1);
}
