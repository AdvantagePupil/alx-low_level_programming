#include "main.h"

/**
 *  get_bit - Entry point
 *
 *  description: unction that returns the value of a bit at a given index
 *
 *  @n : number
 *
 *  @index: index
 *
 *  Return:  value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	i = 1 << index;
	j = n & i;
	if (j == i)
	{
		return (1);
	}
	return (0);	
}
