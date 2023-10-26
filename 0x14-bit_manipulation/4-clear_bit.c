#include "main.h"

/**
 * clear_bit - Entry point
 *
 * description: function that sets the value of a bit to 0 at a given index
 *
 * @n: pointer
 *
 * @index: index
 *
 * Return: 1 if true
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
