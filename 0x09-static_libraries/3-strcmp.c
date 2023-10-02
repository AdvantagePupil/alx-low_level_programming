#include "main.h"

/**
 * _strcmp - Entry point
 *
 * description: a function that comapres 2 lines
 *
 * @s1: our first string
 *
 * @s2: our 2nd string
 *
 * Return: if the lines are the same or not
 */

int _strcmp(char *s1, char *s2)
{
	int same = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			same = ((int) *s1 - 48) - ((int) *s2 - 48);
				break;
		}
		s1++;
		s2++;
	}
	return (same);
}
