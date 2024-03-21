#include "lists.h"

/**
 * free_dlistint - Entry point
 *
 * description: free the list
 *
 * @head: pointer to head of the list
 *
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
