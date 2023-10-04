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

	i = malloc(sizeof(char) * j + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	{
		j++;
	}
	if (i == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	{
		i[n] = str[n];
	}
	return (i);

}
