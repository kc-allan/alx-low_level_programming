#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds node at the beginning of a list
 * @head: points to list pointer
 * @str: string element og list
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t a = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[a])
		a++;

	new->str = strdup(str);
	new->len = a;
	new->next = *head;
	*head = new;

	return (*head);
}
