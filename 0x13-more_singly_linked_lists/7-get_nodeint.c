#include "lists.h"
/**
 * get_nodeint_at_index - gets node value at an index
 * @head: pointer to list pointer
 * @index: position of node
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
