#include "lists.h"

/**
 * add_node - Entry point
 *
 * description: adds a new node at the beginning of a list_t list.
 *
 * @head: pointer
 *
 * @str: pointer
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	unsigned int i, j;

	i = j = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
	return (NULL);
	}

	node->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}
	node->len = j;

	node->next = *head;

	*head = node;

	return (*head);
}
