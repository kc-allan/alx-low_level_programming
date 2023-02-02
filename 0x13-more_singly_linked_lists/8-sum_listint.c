#include "lists.h"
/**
 * sum_listint - sums all integers in a list
 * @head: pointer to list
 * Return: sum of integers
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
