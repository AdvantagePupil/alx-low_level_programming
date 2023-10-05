#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *  _strlen - Entry point
 *
 *  @s: string
 *
 *  Return: always 0 (success)
 */

int _strlen(char *s)
{
	int size = 0;

	for (size = 0; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *str_concat - Entry point
 *
 * description: a function that concatenates two strings.
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: always 0 (success)
 */

char *str_concat(char *s1, char *s2)
{
	int i;

	int strg1;

	int strg2;

	char *j;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	strg1 = _strlen(s1);
	strg2 = _strlen(s2);
	j = malloc((strg1 + strg2) * sizeof(char) + 1);

	if (j == 0)
	{
		return (0);
	}
	for (i = 0; i <= strg1 + strg2; i++)
		if (i < strg1)
		{
			j[i] = s1[i];
		}
		else
		{
			j[i] = s2[i - strg1];
		}
	j[i] = '\0';
	return (j);
}
