#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: initial list
 * @n: value of head->n
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
