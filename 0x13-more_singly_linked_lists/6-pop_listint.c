#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - frees list
 * @head: pointer to list pointer
 * Return: value of head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (data);
}
