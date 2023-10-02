#include "main.h"

/**
 * *_strstr - Entry point
 *
 * description: a function that locates a substring.
 *
 * @haystack: pointer
 *
 * @needle: pointer
 *
 * Return: Returns a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	int j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
			{
				break;
			}
		}
		if (needle[j - i] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);

}
