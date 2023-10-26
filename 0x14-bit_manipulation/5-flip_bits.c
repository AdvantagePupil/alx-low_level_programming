#include "main.h"

/**
 * flip_bits - Entry point
 *
 * description: function that returns the number of bits you would need to flip
 *
 * @n: 1st num
 *
 * @m: 2nd num
 *
 * Return: the number of bites required
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count;

	unsigned long int x, j;

	i = count = 0;

	j = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		x = j >> i;
		if (x & 1)
		{
			count++;
		}
	}
	return (count);
}
