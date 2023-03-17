#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: starring point
 */
void free_dlistint(dlistint_t *head)
{
	for (i = 0; head->next != NULL)
	{
		head = head->next;
		free(head)
	}
}
