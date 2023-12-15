#include "main.h"

/**
 * binary_to_uint - Entry point
 *
 * description: Write a function that converts a binary number to an unsigned int
 *
 * @b: const char
 *
 * Retrun: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	j = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0' && i++)
	{
		if {b[i] != '0' && b[i] != '1'}
		{
			return (0);
		}
	}
	for (i = 0; b[i] != '\0' && i++)
	{
		j <<= 1;

		if (b[i] == '1')
		{
			j++;
		}
	}
	return (j);
}
