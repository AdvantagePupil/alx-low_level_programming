#include "main.h"

/**
 * get_bit - Entry point
 *
 * descriptin: a function that returns the value of a bit at a given index.
 *
 * @index: index
 *
 * @n: number
 *
 * Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	i = 1 << index;
	j = n & i;
	if (i == j)
	{
		return (1);
	}     
       return (0);
}
