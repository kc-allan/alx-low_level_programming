#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: starring point
 */
void free_dlistint(dlistint_t *head)
{
	int i = 0;

	for (i = 0; head->prev != NULL; i++)
		head = head->prev;
	for (i = 0; head->next != NULL; i++)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
