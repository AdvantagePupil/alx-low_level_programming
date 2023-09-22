#include "main.h"
#include <stdio.h>

/**
 * isLower - Entry point
 *
 * @c: character
 *
 * Return: char
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - Entry point
 *
 * @c: char
 *
 * Return: 1 if delimiter
 */

int isDelimiter(char c)
{
	int i;

	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - Entry point
 *
 * description: a function that capitalizes all words of a string.
 *
 * @s: pointer
 *
 * Return: the capitalized words
 */

char *cap_string(char *s)
{
	char *ptr = s;

	int j = 1;

	while (*s)
	{
		if (isDelimiter(*s))
		{
			j = 1;
		}
		else if (isLower(*s) && j)
		{
			*s -= 32;
			j = 0;
		}
		else
		{
			j = 0;
		}
		s++;
	}
	return (ptr);
}
