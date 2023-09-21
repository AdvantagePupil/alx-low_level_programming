#include "main.h"

/**
 * *_strcat - Entry poiny
 *
 * Description: a function that concatenates two strings.
 *
 * @dest: a pointer
 *
 * @src: a pointer
 *
 * Return: the a string after we concat two strings
 */

char *_strcat(char *dest, char *src)
{
	int s = 0;

	int n = 0;

	while (dest[s])
	{
		s++;
	}
	for (n = 0; src[n]; n++)
	{
		dest[s] = src[n];
		s++;
	}
	return(dest);
}
