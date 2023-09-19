#include "main.h"

/**
 * _atoi - Entry point
 *
 * description: a function that convert a string to an integer.
 *
 * @s: is a pointer
 *
 * Return: the conerted integers
 */

int _atoi(char *s)
{
	unsigned int i;

	int n;

	i = 0;

	n = 1;

	do {
		if (*s == '-')
			n *= -1;
		else if (*s >= '0' && *s <= '9')
			i = (i * 10) + (*s - '0');
		else if (i > 0)
			break;
	} while (*s++);

	return (i * n);
}
