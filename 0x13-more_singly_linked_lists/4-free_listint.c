#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees the list
 * @head: pointer to list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
