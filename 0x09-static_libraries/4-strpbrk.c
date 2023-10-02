#include "main.h"

/**
 * *_strpbrk - Entry point
 *
 * description:  a function that searches a string for any of a set of bytes.
 *
 * @s: pointer
 *
 * @accept: pointer
 *
 * Return: Returns a pointer to the byte in s that matches the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	int j;

	char *p;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
