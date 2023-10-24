#include "lists.h"

/**
 * print_listint - Entry point
 *
 * description: function that prints all the elements of a listint_t list
 *
 * @h: pointer
 *
 * Return: all the elements of a listint_t
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	const listint_t *current = h;

	for (; current != NULL; current = current->next)
	{
		printf("%d\n", current->n);

		nodes++;
	}
	return (nodes);
}
