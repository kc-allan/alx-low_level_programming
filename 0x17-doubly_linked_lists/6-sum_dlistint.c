#include "lists.h"
/**
 * sum_dlistint - sums up all elements in a list
 * @head: pointer to list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->prev != NULL)
		head = head->prev;
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
