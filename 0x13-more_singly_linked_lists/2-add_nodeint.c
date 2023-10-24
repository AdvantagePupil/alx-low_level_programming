#include "lists.h"

/**
 * add_nodeint - Entry point
 *
 * description: function that adds a new node at the beginning
 *
 * @head: pointers
 *
 * @n: int
 *
 * Return: dds a new node at the beginning of a listint_t list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodes;

	if (head == NULL)
	{
		return (NULL);
	}

	nodes = malloc(sizeof(listint_t));

	nodes->n = n;
	nodes->next = *head;
	*head = nodes;
	return (*head);
}
