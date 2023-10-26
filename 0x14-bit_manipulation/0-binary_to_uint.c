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

	if (b == NULL)
	{
		return (0);
	}
	for (n = 0; b[n] != '\0'; n++)
	{
		if (b[n] != '\0' && b[n] != '1')
		{
			return (0);
		}
		j = (j << 1) + (b[n] - '0');
	}
	return (j);

}
