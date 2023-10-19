#include "lists.h"

/**
 * print_list - Entry point
 *
 * description: a function that prints all the elements of a list_t list
 *
 * @h: pointer
 *
 * Return: elements of list-t list
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	const list_t *current = h;

	while (current != NULL)
	{
		if (current == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;

		node++;
	}
	return (node);
}
