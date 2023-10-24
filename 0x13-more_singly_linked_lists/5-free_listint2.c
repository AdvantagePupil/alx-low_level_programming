#include "lists.h"

/**
 * free_listint2 - Entry point
 *
 * description: function that frees a listint_t list.
 *
 * @head: pointer
 *
 * Return: frees a listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	listint_t *next;

	if (current == NULL)
	{
		return;
	}
	while (current != NULL)
	{
		next = current->next;

		free(current);

		current = next;
	}

}
