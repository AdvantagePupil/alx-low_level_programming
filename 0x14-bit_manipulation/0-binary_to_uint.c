#include "main.h"

/**
 * binary_to_uint - Entry point
 *
 * Description:a function that converts a binary number to an ui
 *
 * @b: pointer
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int n = 0;
	unsigned int j = 0;

	if (!b)
	{
		return (0);
	}
	if (b[n] != '\0' && b[n] != '1')
	{
		return (0);
	}
	for (n = 0; b[n] != '\0'; n++)
	{
		j <<= 1;
		if (b[n] == '1')
		{
			j += 1;
		}
	}
	return (j);

}
