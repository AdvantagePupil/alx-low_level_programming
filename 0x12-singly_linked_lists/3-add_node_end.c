#include "lists.h"

/**
 * add_node_end - Entry point
 *
 * description: adds a new node at the end of a list_t list.
 *
 * @head: pointer
 *
 * @str: pointer
 *
 * Return: address of new elements
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *last;

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

	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = node;
	}

	return (*head);
}
