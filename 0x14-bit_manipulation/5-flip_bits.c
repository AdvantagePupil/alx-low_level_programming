#include "main.h"

/**
 * flip_bits - Entry point
 *
 * description: function that returns the number of bits you would need
 *
 * @n: unsiged int
 *
 * @m: unsgined int
 *
 * Return: number of bits you would need to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;

	int l;

	unsigned long int j;

	unsigned long int x;

	i = 0;

	l = 0;

	x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		j = x >> i;
		if (j & 1)
		{
			l++;
		}
	}
	return (l);
}
