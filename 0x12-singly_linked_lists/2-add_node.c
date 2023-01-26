#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	length = str_length(str);

	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;

	return (*head);
}
/**
 * str_length - computes string length
 * @st: string pointer
 *
 * Return: length
 */
size_t str_length(const char *st)
{
	size_t lent = 0;

	while (st[lent] != '\0')
	{
		lent++;
	}
	return (lent);
}

