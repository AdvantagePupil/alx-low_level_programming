#include "main.h"
#include<stdlib.h>
#include <stddef.h>

/**
 * *_strdup - Entry point
 *
 * description: returns a pointer to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *i;

	int j;

	int n;

	j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
		;
	i = malloc(j * sizeof(*str) + 1);

	if (i == 0)
	{
		return (NULL);
	}
	else
	{
		for (n = 0; n < j; n++)
		{
			i[n] = str[n];
		}
	}
	return (i);
}
