#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *string_nconcat - Entry point
 *
 * description: function that concatenates two strings.
 *
 * @s1: pointer
 *
 * @s2: pointer
 *
 * @n: unsigned int
 *
 * Return: always 0 (success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int i, j, str1g, str2g;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	for (str1g = 0; s1[str1g] != '\0'; str1g++)
	{
		;
	}
	for (str2g = 0; s1[str2g] != '\0'; str2g++)
	{
		;
	}
	str = malloc(str1g + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
