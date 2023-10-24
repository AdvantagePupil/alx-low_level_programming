#include "lists.h"

/**
 * listint_len - Entry point
 *
 * descrition: function that returns the number of elements in a linked
 *
 * @h: pointers
 *
 * Return: returns the number of elements in a linked
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
