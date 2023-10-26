#include "main.h"

/**
 * set_bit - Entry point
 *
 * description: a function that sets the value of a bit to 1 at a given index
 *
 * @n: pointer
 *
 * @index: index
 *
 * Return: i if true
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	i = 1 << index;
	*n = *n | i;
	return (1);
}
