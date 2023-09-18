#include "main.h"

/**
 * _strlen - Entry point
 *
 * description: a function that returns the length of a string.
 *
 * @s: our string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '0'; s++)
	{
		i++;
	}
	return (i);
}
