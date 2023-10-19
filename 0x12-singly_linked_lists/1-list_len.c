#include "lists.h"

/**
 * list_len - Entry point
 *
 * description: returns the number of elements in a linked list_t list
 *
 * @h: pointer
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
